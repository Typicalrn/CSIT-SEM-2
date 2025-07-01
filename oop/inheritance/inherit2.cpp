#include<iostream>
using namespace std;

class Parent{
    protected:
        int x,y;
    public:
    Parent(){
        cout<<"I am default parent constructor"<<endl;
    }
    Parent(int x,int y):x{x},y{y}{
        cout<<"I am parameterized parent constructor"<<endl;
    }
    void getData(){
        cout<<x<<endl<<y;
    }
};
class Child:public Parent{
    protected:
        int z;
    public:
    Child():Parent(){
        cout<<"I am default child consstructor"<<endl;
    }
    Child(int a,int b,int c):Parent(a,b),z{c}{
        cout<<"I am parameterized child consstructor"<<endl;
    }
    void getData(){
        Parent::getData();
        cout<<endl<<z;
    }
};

int main()
{
    Child c2;
    Child c1(10,20,30);
    c1.getData();
    return 0;
}
