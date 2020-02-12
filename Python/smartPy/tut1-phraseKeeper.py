import smartpy as sp
# Creation of Contract functions in an Class Object
# This class object has 2 main functions, 
# First being the __init__ which is required
# Second being the setPhrase function which is optional
# 1. initi initialized the sp.string value of (initialPhrase)
# being the first parameter of the PhraseKeeper class.
# 2. setPhrase uses its first parameter to change the 
# self.data.phrase (located in the self.init call above)
# thus changing the value inside of the smart contract.

class PhraseKeeper(sp.Contract) : 
    def __init__(self, initialPhrase) : 
        self.init(phrase = sp.string(initialPhrase))
        
    @sp.entry_point
    def setPhrase(self, params) : 
        self.data.phrase = params
        
# Required to test the contract in smartpy            
@sp.add_test(name = "PhraseSetTest")
def test():
    
    # Required to rest the contract in smartpy
    scenario = sp.test_scenario()
    
    #add header for output
    scenario.h1("String Test")
    
    #Initialization of PhraseKeeper in variable c1
    c1 = PhraseKeeper("Tezos Tacos Nachos")
    
    # must add smartPy test scenario to the c1 class
    # initialization
    scenario += c1
    
    #add header for output
    scenario.h2("Update text")
    
    # add the new function call to the smartpy test scenario.
    scenario += c1.setPhrase("Yum Yum Yum")
    