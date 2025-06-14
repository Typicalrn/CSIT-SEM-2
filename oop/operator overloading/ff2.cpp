#include<iostream>
using namespace std;

class complex
{
private:
    float real;
    float imaginary;
public:
 complex(){
    real=imaginary=0;
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
 friend complex operator +(complex c1,complex c);
 friend complex operator -(complex c1,complex c);
 friend complex operator++(complex c1);
};
complex operator +(complex c1,complex c){
    complex temp;
    temp.real=c1.real+c.real;
    temp.imaginary=c1.imaginary+c.imaginary;
    return temp;
 }
complex operator -(complex c1,complex c){
    complex temp;
    temp.real=c1.real-c.real;
    temp.imaginary=c1.imaginary-c.imaginary;
    return temp;
 }
complex operator++(complex c1){
    c1.real+=1;
    c1.imaginary+=1;
}
 
int main()
{
    complex c1(8,8),c2(3,3),c3,c4;
    float r=5;
    c3=r;
    c3.getData();
    //c3=c1.add2Num(c2);
    c3=c1+c2;
    c4=c1-c2;
    c3.getData();
    cout<<endl;
    c4.getData();
    ++c1;
    cout<<endl;
    c1.getData();
    return 0;
}
