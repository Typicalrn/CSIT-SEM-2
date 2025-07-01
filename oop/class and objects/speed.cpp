#include<iostream>
using namespace std;
class car{
private:
    float speed;
    void accel(int a){
        cout<<"hell";
    }
public:
    car(){
        speed=0;
    }
    car(float s){
        speed=s;
    }
    void current(){
        cout<<"Your speed is:"<<speed<<"km/hr"<<endl;
    }
    void accel(){
        speed+=5;
        accel(12);
    }
    void brake(){
        speed-=5;
    }
    
};


int main(){
    char choice;
    float spec;
    cout<<"Enter your current speed:";
    cin>>spec;
    car c1(spec);
    cout<<"Do you want accelerate or brake?:"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 'w':
        c1.accel();
        c1.current();
        break;
    case 's':
        c1.brake();
        c1.current();
        break;
    default:
        break;
    }
}
