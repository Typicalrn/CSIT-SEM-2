#include<iostream>
using namespace std;

class Calculator
{
private:
    float n1,n2;
public:
   void AddTwoIntegers(int a,int b);
   void AddThreeIntegers(int a,int b,int c);
   void AddTwoFloats(float a,float b);
};

void Calculator::AddTwoIntegers(int a,int b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
void Calculator::AddThreeIntegers(int a,int b,int c)
{
    cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<endl;
}
void Calculator::AddTwoFloats(float a,float b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}




int main(){
    Calculator c1;
    c1.AddTwoIntegers(1,2);
    c1.AddThreeIntegers(1,2,3);
    c1.AddTwoFloats(10.0,2.0);
    return 0;
}