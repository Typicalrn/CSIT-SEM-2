#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor\n"; }
    virtual ~Base() { cout << "Base destructor\n"; } // Make it virtual
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Base* obj = new Derived();
    delete obj; // Will call both destructors because it's virtual
    return 0;
}

