#include<iostream>
using namespace std;

class complex
{
private:
    float real;
    float imaginary;
public:
 complex(){
    real=imaginary=2;
 }
 complex(float r){
    real=r;imaginary=0;
 }
 complex(float r,float i){
    real=r;
    imaginary=i;
 }

 void getData(){
    cout<<real<<"+"<<imaginary<<"i";
 }
 operator int(){
    return (real);
 }
};

 
int main()
{
    complex c1(8,8),c2(3,3),c3,c4;
    float r=5;
    c3=r;
    c3.getData();
    int x=c4;
    cout<<x;
    
    return 0;
}
