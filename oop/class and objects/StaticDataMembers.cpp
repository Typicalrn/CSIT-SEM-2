#include<iostream>
using namespace std;

class Student{
    public:
    int rollno;
    static string cname;
    static void printname(){
        cout<<cname;
    }
    void print();
};
string Student::cname="ABCD";
void Student::print(){
    cout<<rollno<<cname;
}

int main(){
    Student s1;
    s1.rollno=100;
    cout<<s1.rollno<<endl<<s1.cname<<endl;
    Student::printname();
    cout<<endl;
    s1.print();
    return 0;
}

