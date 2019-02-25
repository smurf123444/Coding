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

-- Redeemer Script (required to guess locked word in blockchain and redeem reward)
mkRedeemerScript :: String -> RedeemerScript --newtype RedeemerScript = RedeemerScript { getRedeemer :: Script }
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

gameAddress :: Address'
gameAddress = Ledger.scriptAddress gameValidator

lock :: String -> Value -> MockWallet()
lock word value =
        payToScript_ gameAddress value (mkDataScript word)

guess :: String -> MockWallet ()
guess word = 
    collectFromScript gameValidator (mkRedeemerScript word)

startGame :: MockWallet ()
startGame =
    startWatching gameAddress

$(mkFunction 'lock)
$(mkFunction 'guess)
$(mkFunction 'startGame)

