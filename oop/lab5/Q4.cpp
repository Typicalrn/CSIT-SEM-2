#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animals[2];
    Dog d;
    Cat c;

    animals[0] = &d;
    animals[1] = &c;

    for (int i = 0; i < 2; i++) {
        animals[i]->speak();
    }

    return 0;
}
