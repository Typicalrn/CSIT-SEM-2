#include<iostream>
using namespace std;

class Employee{
    protected:
        string name;
        float salary;
    public:
    Employee(){
        cout<<"I am default parent constructor"<<endl;
    }
    Employee(string name,float salary):name{name},salary{salary}{
        cout<<"I am parameterized parent constructor"<<endl;
    }
    void getData(){
        cout<<name<<endl<<salary;
    }
};
class Developer:public Employee{
    protected:
        string skills;
    public:
    Developer():Employee(){
        cout<<"I am default child consstructor"<<endl;
    }
    Developer(string a,float b,string c):Employee(a,b),skills{c}{
        cout<<"I am parameterized child consstructor"<<endl;
    }
    void getData(){
        Employee::getData();
        cout<<endl<<skills;
    }
};

int main()
{
    Developer c2;
    Developer c1("Aryan",20000.00,"Python");
    c1.getData();
    return 0;
}
