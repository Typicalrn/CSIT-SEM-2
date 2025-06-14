#include<iostream>
using namespace std;

void swap(int,int);

int main(){
    int x=5,y=10;
    swap(x,y);
    cout<<"calling function"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}

void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
     cout<<"called function"<<endl;
     cout<<"x="<<x<<endl<<"y="<<y<<endl;
}