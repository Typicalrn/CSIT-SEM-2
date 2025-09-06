#include <iostream>

class ParentClass{

    public:

        ParentClass(){
            std::cout << "This is constructor in parent class." << '\n';
        }

};

class ChildClass:public ParentClass{

    public:
        
        ChildClass(){
            std::cout << "This is constructor in derived class." << '\n';
        }


};

int main(){

    ChildClass c1;

}
