#include<iostream>
#include"header.h"
using namespace std;
namespace name1
{
    int x=10;
} // namespace name1
namespace name2
{
    int x=20;
} // namespace name2



int main(){
    cout<<"hello world..."<<endl<<name1::x;

    
    cout<<"Sum:"<<add(20,40);
    return 0;
}
