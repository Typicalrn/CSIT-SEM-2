#include <iostream>
using namespace std;

class Employee{

    private:
        int id;
        float salary;
        string name;

    public:

        void getData(){

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Name: ";
            getline(cin >> ws, name);

            cout << "Enter Salary: ";
            cin >> salary;

        }

        void showData(){

            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;

        }

};

int main(){

    int size;
    cout << "Enter number of objects: ";
    cin >> size;

    Employee s[size];
    
    for(int i = 0; i<size; i++){
        s[i].getData();
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
        s[i].showData();
    }

}