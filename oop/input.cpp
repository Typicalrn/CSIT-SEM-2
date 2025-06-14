#include<iostream>
#include<string>
using namespace std;
inline int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y,res;
    cout<<"enter first number:"<<endl;
    cin>>x;
    cout<<"enter second number:"<<endl;
    cin>>y;
    res=sum(x,y);
    cout<<"sum is"<<res<<endl;
    // char str[200];
    // cout<<"enter string";
    // cin>>str;
    // cin.get(str,200,'#');
    // cout<<str;
    string str="Hello";
    cout<<str;
    return 0;
}