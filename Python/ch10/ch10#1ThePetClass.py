# define main for program
def main():

    # prompt user input
    name = input("Whats you pets name?: ")
    animal_type = input("Animal type?: ")
    age = input("Age?: ")

    # set input to display function parameters
    display(name, animal_type, age)

# pet class as defined in subject
class Pet:
    def __init__(self, name, animal_type, age):
        self.__name= name
        self.__animal_type = animal_type
        self.__age = age
    
    def set_name(self, name):
        self.__name = name
    
    def set_animal_type(self, animal_type):
        self.__animal_type = animal_type

    def set_age(self, age):
        self.__age = age
    
    def get_name(self):
        return self.__name

    def get_animal_type(self):
        return self.__animal_type
    
    def get_age(self):
        return self.__age

# function to display input from main()
def display(name, animal_type, age):

    # set input to reference variable to manipulate and/or print
    my_pet = Pet(name, animal_type, age) 
    print()   
    print("Here is information you entered:")
    print("Pet name:", my_pet.get_name())
    print("Animal Type:", my_pet.get_animal_type())
    print("Age:", my_pet.get_age())

# execute program
main()