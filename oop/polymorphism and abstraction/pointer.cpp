#include<iostream>
using namespace std;

class Student
{
private:
    string name;
public:
    void setData(){
        cout<<"Enter Name:";cin>>name;
    }
    void getData(){
        cout<<name<<endl;
    }

};

int main(){
    Student *st=new Student;
    st->setData();
    st->getData();
    delete st;
    st->getData();
    return 0;
}


