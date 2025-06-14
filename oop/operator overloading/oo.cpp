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
 complex(float r,float i){
    real=r;
    imaginary=i;
 }
//  complex add2Num(complex c1,complex c2){
//         complex temp;
//         temp.real=c1.real+c2.real;
//         temp.imaginary=c1.imaginary+c2.imaginary;
//         return temp;
//  }
//  complex add2Num(complex c2){
//         complex temp;
//         temp.real=this->real+c2.real;
//         temp.imaginary=this->imaginary+c2.imaginary;
//         return temp;
//  }
 void getData(){
    cout<<real<<"+"<<imaginary<<"i";
 }
 complex operator +(complex c){
    complex temp;
    temp.real=this->real+c.real;
    temp.imaginary=this->imaginary+c.imaginary;
    return temp;
 }
 complex operator -(complex c){
    complex temp;
    temp.real=this->real-c.real;
    temp.imaginary=this->imaginary-c.imaginary;
    return temp;
 }
 complex operator++(){
    real+=1;
    imaginary+=1;
}
};
 
int main()
{
    complex c1(8,8),c2(3,3),c3,c4;
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
