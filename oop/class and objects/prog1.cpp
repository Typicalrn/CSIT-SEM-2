
#include<iostream>
#include<string>
using namespace std;

class student
{
private://private ,public or protected
    int rollNo;//representing attributes of the objects using variables
    string name;

public://access specifier
//representing behaviour of the objects using methods
    void setdata(string stdname,int stdroll){//setter--> ot set the data members
        name=stdname;
        rollNo=stdroll;
    }
    void getdata(){//getter --> to get the data members
        cout<<"Enter the name of student:"<<name<<endl;
        cout<<"Enter the Roll no of student:"<<rollNo<<endl;
    }
};//end of class definition

int main(){//start of main function
    student s1,s2;//creating objects of a class
    // s1.name="Aryan";//accessing public data
    // s1.rollNo=18;
    s1.setdata("Aryan",18);
    s2.setdata("Hardik",19);

    s1.getdata();//calling the getter method to get data members
    s2.getdata();

    
}

