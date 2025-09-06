#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0; // pure virtual
};

class FullTimeEmployee : public Employee {
    double monthlySalary;
public:
    FullTimeEmployee(double s) : monthlySalary(s) {}
    double calculateSalary() override {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
    double hoursWorked;
    double payPerHour;
public:
    PartTimeEmployee(double hours, double rate) : hoursWorked(hours), payPerHour(rate) {}
    double calculateSalary() override {
        return hoursWorked * payPerHour;
    }
};

int main() {
    Employee* e1 = new FullTimeEmployee(50000);
    Employee* e2 = new PartTimeEmployee(120, 200);

    cout << "Full-time salary: " << e1->calculateSalary() << endl;
    cout << "Part-time salary: " << e2->calculateSalary() << endl;

    delete e1;
    delete e2;
    return 0;
}