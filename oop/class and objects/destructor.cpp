#include<iostream>
using namespace std;

class destructor
{
private:
    int a,b;
public:
    destructor();
    destructor(int x,int y);
    
    void show(){
        cout<<"a"<<a;
        cout<<"b"<<b<<endl;

    }
    destructor add(destructor d1,destructor d2){
        destructor d;
        d.a=d1.a+d2.a;
        d.b=d1.b+d2.b;
        return d;
    }
};

destructor::destructor(/* args */)
{
    a=0,b=0;
}
destructor::destructor(int x,int y){
    a=x;
    b=y;
}


int main(){
    destructor d1(3,3),d3;
    destructor d2(2,2);
    d1.show();
    d2.show();
    d3=d3.add(d1,d2);
    d3.show();

}
