#include<iostream>
using namespace std;

class rectangle{
    private:
    int length,width;

    public:
    rectangle(){
        // cout<<"I am constructor";
        length=width=10;
    }

    void getData(){
        cout<<length<<endl<<width;
    }
    rectangle(int x,int y){
        length=x;
        width=y;
    }
    rectangle(rectangle & s){
        length=s.length;
        width=s.width;
    }
};


int main()
{
    rectangle r1;
    rectangle r2(50,190);
    rectangle r3(r2);
    
    r1.getData();
    cout<<endl; 
    r2.getData();
    cout<<endl; 
    r3.getData();
    return 0;
}

