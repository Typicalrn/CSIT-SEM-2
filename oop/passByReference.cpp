#include<iostream>
using namespace std;

void swap(int &,int &);

int main(){
    int x=5,y=10;
    swap(x,y);
    cout<<"calling function"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}

void swap(int & a,int & b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"called function"<<endl<<"x="<<a<<endl<<"y="<<b<<endl;
}