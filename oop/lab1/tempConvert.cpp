#include<iostream>
using namespace std;

int main(){
    float c=0,f=0,temp=0;
    int choice;
    cout<<"enter the temperature:";
    cin>>temp;
    cout<<"Choose:\n"<<"1. Celcius to Fahrenheit\n"<<"2.Fahrenheit to Celcius\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        f=temp*(9/5)+32;
        cout<<"In Fahrenheit:"<<f;
        break;
     case 2:
        c=(temp-32)*5/9;
        cout<<"In Celcius:"<<c;
        break;
    
    default:
        cout<<"Error";
        break;
    }

    return 0;
}