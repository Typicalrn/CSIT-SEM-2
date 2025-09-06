#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says Meow!" << endl;
    }
};

int main() {
    Animal *ptr;
    Dog d;
    Cat c;

    ptr = &d;
    ptr->speak(); // Dog's version

    ptr = &c;
    ptr->speak(); // Cat's version

    return 0;
}
