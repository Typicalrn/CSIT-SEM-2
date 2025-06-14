#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="hello";
    string str2=" world";
    string str3,str4;
    str3= str1;
    cout<<"str3:"<<str3<<endl;
    str4= str1+str2;
    cout<<"str4:"<<str4<<endl;
    cout<<sizeof(str3);
    return 0;
}