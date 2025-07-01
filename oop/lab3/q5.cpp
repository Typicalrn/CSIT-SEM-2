#include <iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
    public:
        void getData(){
            cout << "Enter student name: ";
            getline(cin >> ws, name);

            cout << "Enter student roll no. : ";
            cin >> roll; 
        }
        int operator <<(Student s1){
            cout << "Name: " << s1.name << endl;
            cout << "Roll: " << s1.roll << endl;
        }
};

int main(){
    Student s1;
    s1.getData();
    cout << "Student Info:" << endl;
    s1<<s1;
}