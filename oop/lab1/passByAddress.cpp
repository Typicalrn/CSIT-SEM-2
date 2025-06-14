#include <iostream>
using namespace std;

// Function that adds 10 using pass by address
void addTen(int* num) {
    *num = *num + 10;
    cout << "Inside function, value = " << *num << endl;
}

int main() {
    int number = 20;

    cout << "Before function call, number = " << number << endl;

    // Call function using the address of number
    addTen(&number);

    cout << "After function call, number = " << number << endl;

    return 0;
}
