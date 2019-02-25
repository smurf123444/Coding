-- define data type for HashedString being a Hashed ByteString.
data HashedString = HashedString ByteString

-- Plutus.makelift (not sure where defined) lifts the hashed string type to plutus compiler
PlutusTx.makeLift ''HashedString

-- Data Script (required to lock hashedWord in the blockchain and reference)
mkDataScript :: String -> DataScript
mkDataScript word =
    Let hashedWord = plcSHA2_256 (C.pack word) {- 1a. this is a script to take a string and converts it into bytestring (pack), 
                                                    then uses plutus core sha2_256 to encrypt byte string before assigning
                                                     the encrypted plc sha2_256 byte string to the "hashedWord" -}
    in DataScript (Ledger.lifted (HashedString hashedWord)) {- 1b. This assigns the hashedWord with the hashedString makelift variable called earlier
                                                                , the output being the input of Ledger.lifted
                                                                lifted :: Lift a => a -> Script
                                                                lifted = Script . serialise . unsafeLiftProgram 
                                                                (lift is a function with no specified def in source, probably a compiler thing)-}
-- define data type for ClearString being a Clear ByteString.
data ClearString = ClearString ByteString
-- Plutus.makelift (not sure where defined) lifts the clear string type to plutus compiler
PlutusTx.makelift ''ClearString

-- | Redeemer Script (given function to guess locked word in blockchain and redeem reward)
-- | Redeemer (supplied by consumer of the transaction output)
mkRedeemerScript :: String -> RedeemerScript -- newtype RedeemerScript = RedeemerScript { getRedeemer :: Script }
mkRedeemerScript word = -- take a Sring word
    let clearWord = C.pack word --turn word into bytestring
    in RedeemerScript (Ledger.lifted (ClearString clearWord)) -- using data type Clear-ByteString of clearword to compare to datascript for validation.

gameValidator :: ValidatorScript -- newtype ValidatorScript = ValidatorScript { getValidator :: Script }
gameValidator = ValidatorScript (Ledger.fromCompiledCode $$(PlutusTx.compile [|| --Ledger.fromCompiledCode takes plutustx.compile code
        \(ClearString guess) (HashedString actual) (p :: PendingTx') -> --
        
        if $$(P.equalsByteString) actual ($$(P.sha2_256) guess) -- p.equalsByteString compares 2 different byte strings and returns true or false.
        then () -- return true
        else ($$(P.error) ($$(P.traceH) "Wrong!" ())) -- else false
    ||]))

gameAddress :: Address' -- Address' type defined somewhere
gameAddress = Ledger.scriptAddress gameValidator -- sets address for gameScript used later for the start of game, and locking of funds to gameValidator address.

lock :: String -> Value -> MockWallet()
lock word value =
    payToScript_ gameAddress value (mkDataScript word) -- takes 2 inputs to lock the game, 1st being a word, and then a value of ada.
    -- ^ function used to pay the gameAddress using the value of ada, and for the datascript associated with all ada transactions; includes our lifted hashed string as posted in (1a) above

guess :: String -> MockWallet ()
guess word = 
    collectFromScript gameValidator (mkRedeemerScript word)
-- ^ attempt to collectFromScript using the word in redeemerscript as input for gameValidator to compare to dataScript' HashedWord on-chain.

startGame :: MockWallet ()
startGame =
    startWatching gameAddress
-- ^startWatching the actions taken at gameAddress for both wallets (must activate for both wallets)..

$(mkFunction 'lock)
$(mkFunction 'guess)
$(mkFunction 'startGame)

-- buttons for functions.