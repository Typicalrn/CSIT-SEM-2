#include<iostream>
using namespace std;

class Addition
{
private:
    int num1,num2;
public:
    // Addition(int n1,int n2);
    
    void add(int x,int y){
        cout<<"The sum is:"<<x+y<<endl;
    }
    void add(int x,int y,int z){
        cout<<"The sum is:"<<x+y+z<<endl;
    }
};

// Addition::Addition(int n1.int n2){
//     num1=n1;
//     num2=n2;
// }

int main(){
    Addition a[3];
    a[0].add(2,3);
    a[1].add(2,3,4);
}