#include<iostream>
using namespace std;

class Instrument{
public:
    // virtual void makeSound()=0;
    Instrument(){
        cout<<"Base constructor...";
    }
    virtual ~Instrument(){
        cout<<"Base destructor...";
    }

};
class Piano:public Instrument{
public:
    // void makeSound(){
    //     cout<<"Piano Playing..";
    // }
    Piano():Instrument(){
        cout<<"Derived constructor...";
    }
    ~Piano(){
        cout<<"Derived destructor...";
    }
};
// class Guitar:public Instrument{
// public:
//     void makeSound(){
//         cout<<"Guitar Playing..";
//     }
// };

int main(){
    // Instrument *st[]={new Piano,new Guitar};
    // for(int i=0;i<2;i++){
    //     st[i]->makeSound();
    // }
    Instrument *ptr=new Piano;
    delete ptr;
    return 0;
}


