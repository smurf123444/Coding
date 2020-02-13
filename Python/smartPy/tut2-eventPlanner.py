import smartpy as sp
class EventPlanner(sp.Contract):
    def __init__(self, initialOwner):
        #Set owner using paramerter, and nameToEvent parameter from sp.map(tkey = sp.TString)
        self.init(owner = initialOwner,
                  nameToEvent = sp.map(tkey = sp.TString))
    @sp.entry_point
    def setDate(self, params):
    #sp.verify checking to see if sender matches owner.
        sp.verify(sp.sender == self.data.owner)
    #checking event of param name,
        self.checkEvent(params.name)
    #using param newDate to set the date of the data stored in nameToEvent using param name
        self.data.nameToEvent[params.name].date = params.newDate
    @sp.entry_point
    def setNumGuests(self, params):
        sp.verify(sp.sender == self.data.owner)
        self.checkEvent(params.name)
    #using param newNumGuests as variable to change numGuests located in that data of nameToEvent[params.name]
        self.data.nameToEvent[params.name].numGuests = params.newNumGuests
    @sp.entry_point
    def changeOwner(self, params):
    #verifying to see if the correct owner sent command.
        sp.verify(sp.sender == self.data.owner)
    # set the owner to the newOwner.
        self.data.owner = params.newOwner
        
    def checkEvent(self, name):
        sp.if ~(self.data.nameToEvent.contains(name)):
            self.data.nameToEvent[name] = sp.record(date = "", numGuests = 0)
            
@sp.add_test(name = "PhraseSetTest")
def test():
    
    # Required to rest the contract in smartpy
    scenario = sp.test_scenario()
    
    #add header for output
    scenario.h1("String Test")
    
   # Initialize test addresses
    firstOwner = sp.address("tz1-firstOwner-address-1234")
    secondOwner = sp.address("tz1-secondOwner-address-5678")
    
    # Instantiate EventPlanner contract
    c1 = EventPlanner(firstOwner)

    #add header for output
    scenario.h2("Output")
    
    scenario += c1
    
    # Invoke EventPlanner entry points and print results to HTML
    scenario.h2("Set date for Tezos Meetup to 11-28-2017")
    scenario += c1.setDate(name = "Tezos Meetup", newDate = "11-28-2017").run(sender = firstOwner)
    
    scenario.h2("Set number of guests for Tezos Meetup to 80")
    scenario += c1.setNumGuests(name = "Tezos Meetup", newNumGuests = 80).run(sender = firstOwner)
    
    scenario.h2("Change owner")
    scenario += c1.changeOwner(newOwner = secondOwner).run(sender = firstOwner)
    
    scenario.h2("New owner sets date for Tezos Meetup to 03-21-2019")
    scenario += c1.setDate(name = "Tezos Meetup", newDate = "03-21-2019").run(sender = secondOwner)
    
    scenario.h2("Old owner attempts to set date for Tezos Meetup")
    scenario += c1.setDate(name = "Tezos Meetup", newDate = "10-15-2018").run(sender = firstOwner, valid = False)
