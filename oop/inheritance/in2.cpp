#include<iostream>
using namespace std;

class vehicle
{
public:
    
    vehicle(){
        cout<<"RWD"<<endl;
    }
    void cond(){
        cout<<"good"<<endl;
    }
};


class bike:public vehicle{
    public:
    bike(){
        cout<<"FWD"<<endl;
    }
    void cond(){
        cout<<"bad"<<endl;
    }
};
class offroad:public bike{
    public:
    offroad(){
        cout<<"4X4"<<endl;
    }
};

int main(){
    offroad o1; 
    o1.vehicle::cond();   
    o1.cond();
    return 0;
}


