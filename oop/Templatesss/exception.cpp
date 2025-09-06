#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a:";cin>>a;
    cout<<"enter b:";cin>>b;
    try
    {
        if (b!=0)
        {
            c=a/b;
            cout<<c;
        }
        else{
            throw "division by zero";
        }
        
    }
    catch(const char* ptr)
    {
        cout<<ptr;
    }
    cout<<"hello world...";
    
}