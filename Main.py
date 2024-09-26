class Animal:
    def __init__(self):
        print("Creating an animal")

    def __del__(self):
        print("Deleting an animal")

    def sound(self):
        print("Animal makes a sound")

class Dog(Animal):
    def __init__(self):
        print("Creating a dog")

    def __del__(self):
        print("Deleting a dog")

    def sound(self):
        print("Dog barks")

class Cat(Animal):
    def __init__(self):
        print("Creating a cat")

    def __del__(self):
        print("Deleting a cat")

    def sound(self):
        print("Cat meows")

if __name__ == "__main__":
    a = Animal()
    
    b = Dog()
    c = Cat()


    a.sound()
    b.sound()
    c.sound()