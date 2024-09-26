#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        std::cout << "Creating an animal" << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Deleting an animal" << std::endl;
    }

    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "Creating a dog" << std::endl;
    }

    ~Dog() override {
        std::cout << "Deleting a dog" << std::endl;
    }

    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        std::cout << "Creating a cat" << std::endl;
    }

    ~Cat() override {
        std::cout << "Deleting a cat" << std::endl;
    }

    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* a = new Animal();
    Dog* b = new Dog();
    Cat* c = new Cat();

    a->sound();
    b->sound();
    c->sound();

    delete a;
    delete b;
    delete c;

    return 0;
}
