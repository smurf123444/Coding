# define main class
def main():

  # define objects of RetailItems
  def objects():
    item1 = RetailItem(1,"Jacket", 12, "$59.95")
    item2 = RetailItem(2,"Designer Jeans", 40, "$34.95")
    item3 = RetailItem(3,"Shirt", 20, "$24.95")
    item1.myfunc()
    item2.myfunc()
    item3.myfunc()
    return 0

  # execute objects in main
  objects()

# Retail item class defined, init used for objects() storing data in scope of RetailItem()
class RetailItem:
  def __init__(self, num, description, units, price):
    self.num = str(num)
    self.description = description
    self.units = str(units)
    self.price = price


# define myfunc() to print() the given values from RetailItem() parameter
  def myfunc(self):
    print()
    print("Item #" + self.num)
    print("Description: " + self.description)
    print("Units in Inventory: " + self.units)
    print("Price: " + self.price)
    print()

# execute program
main()