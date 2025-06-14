#include<iostream>
using namespace std;

void area(int,int);
void area(float);

int main(){
    int radius,length,breadth;
     
    cout<<"Enter radius";
    cin>>radius;
    cout<<"Enter length and breadth";
    cin>>length>>breadth;
    area(radius);
    area(length,breadth);
    return 0;
}

void area(int l,int b){
    cout<<"area of rectangle is"<<l*b;
}
void area(float r){
    cout<<"area of circle is"<<2*3.14*r;
}