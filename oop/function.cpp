#include<iostream>
using namespace std;
int area(int x,int y);

int main(){
    int length,breadth;
    cout<<"Enter length and breadth:";
    cin>>length>>breadth;
    cout<<"The area is:"<<area(length,breadth);
    return 0;
}
int area(int x,int y){
    // cout<<"the area is:"<<x*y;
    return x*y;
}