def main():
    def prompt():
        name = input("Name of Employee: ")
        number = input("Employee Number: ")
        shift = int(input("Shift (1 = Day Shift, 2 = Night Shift): "))
        rate = float(input("Hourly Rate: "))
        print()
        my_production = productionWorker(name, number, shift, rate)
        print("Your Production Worker Info: ")
        print(my_production.get_name())
        print(my_production.get_number())
        if shift == 1:
            print("Day Shift (#1)")
        elif shift == 2:
            print("Night Shift (#2)")
        else:
            print("No Shift Found")
        print(my_production.get_rate())
    prompt()

class Employee:
    def __init__(self, name, number):
        self.__name = name
        self.__number = number

    def set_name(self, name):
        self.__name = name
    
    def set_numbers(self, number):
        self.__number = number
    
    def get_name(self):
        return self.__name

    def get_number(self):
        return (self.__number)

class productionWorker(Employee):
    def __init__(self, name, number, shift, rate):
        Employee.__init__(self, name, number)

        self.__shift = shift
        self.__rate = rate

    def set_shift(self, shift):
        self.__shift = shift
    
    def set_rate(self, rate):
        self.__rate = rate
    
    def get_shift(self):
        return self.__shift
    
    def get_rate(self):
        return self.__rate
        
main()