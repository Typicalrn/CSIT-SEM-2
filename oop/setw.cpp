#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int cha ='a';
    cout<<cha<<endl;
    int x=12,y=23;
    float f=3.14169;
    cout<<setprecision(3)<<f<<endl;
    cout<<setw(12)<<"hello"<<endl<<setw(12)<<"world"<<endl<<setw(12)<<"c++";
    return 0;
}