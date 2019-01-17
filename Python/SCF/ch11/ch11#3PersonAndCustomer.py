def main():
    my_customer = Customer(name, address, phone, customer_number, mailing_list)
    print()
    print('Customer Information')
    print('--------------------')
    print('Name: ', my_customer.get_name())
    print('Address:', my_customer.get_address())
    print('Phone:', my_customer.get_phone())
    print('Customer Number:', my_customer.get_customer_number())
    print('Mailing List:', my_customer.get_mailing_list())

class Person:
    def __init__(self, name, address, phone):
        self.__name= name
        self.__address = address
        self.__phone = phone

    def set_name(self, name):
        self.__name = name

    def set_address(self, address):
        self.__address = address

    def set_phone(self, phone):
        self.__phone = phone

    def get_name(self):
        return self.__name

    def get_address(self):
        return self.__address

    def get_phone(self):
        return self.__phone

class Customer(Person):
    def __init__(self, name, address, phone,
                    customer_number, mailing_list):
        Person.__init__(self, name, address, phone)

        self.__customer_number = customer_number
        self.__mailing_list = mailing_list
    
    def set_customer_number(self, customer_number):
        self.__customer_number = customer_number

    def set_mailing_list(self, mailing_list):
        self.__mailing_list = mailing_list
    
    def get_customer_number(self):
        return self.__customer_number
    
    def get_mailing_list(self):
        return self.__mailing_list

name = input('Name: ')
address = input('Address: ')
phone = input('Phone: ')
customer_number = input('Customer number: ')
mail = input('Include in mailing list? (y/n):')

if mail.lower() == 'y':
    mailing_list = True
else:
    mailing_list = False

main()
