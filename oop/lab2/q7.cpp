#include <iostream>
using namespace std;

class Student{

    private:
        int roll;
        string name;
        static int stuNum;

    public:

        void getData(){

            cout << "Enter student name: ";
            getline(cin >> ws, name);

            cout << "Enter student roll no. : ";
            cin >> roll;

            stuNum++;
            
        }

        void getNum(){
        
            cout << "Number of students: " << stuNum << endl;

        }
};

int Student::stuNum = 0;

int main(){

    Student s1,s2,s3;

    s1.getData();
    s2.getData();
    s3.getData();

    s1.getNum();

}