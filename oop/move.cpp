#include<iostream>
#include <conio.h>
#include <windows.h>
#include<iomanip>
using namespace std;
int x = 1;
int y= 2;
void UserInput()
{
    if (_kbhit()) {
        switch (_getch()) {
        case 'd':
            y = 00;
            break;
        case 'a':
            y=01;
            break;
        case 'w':
            y=10;
            break;
        case 's':
            y=11;
            break;
        case 'x':
        x=0;

        }
    }
}
int main(){
    int i = 0;
    int j = 0;
    cout<<"0";
    while(x == 1){
        UserInput();
        system("cls");
        if(y == 00){
            i=i+1;

        }
        if( y == 01){
            i=i-1;
        }
        if(y == 10){
            j=j-1;
        }
        if( y == 11){
            j=j+1;
        }

        cout<<setw(i)<<"0";

    }


}