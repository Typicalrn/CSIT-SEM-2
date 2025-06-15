#include <iostream>
using namespace std;

class Student{

    private:
        int roll;
        float marks;
        string name;

    public:

        void getData(int rl,string nm, float mr ){

            roll = rl;
            marks = mr;
            name = nm;

        }

        void showData(){

            cout << "Roll: " << roll <<endl;
            cout << "Name: " << name <<endl;
            cout << "Marks: " << marks <<endl;

        }

};
int main(){

    Student s1;

    s1.getData(1404,"Aryan",90);
    s1.showData();

}