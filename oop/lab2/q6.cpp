#include <iostream>
using namespace std;

class Box{

    private:
        double length;
        double breadth;
        double height;


    public:
        
        Box(){}

        Box(double l){
            length = l;
            breadth = l;
            height = l;
        }

        Box(double l, double b, double h){
            length = l;
            breadth = b;
            height = h;
        }


        void volume(){
        
            cout << "Volume = " << length*breadth*height << endl;    

        }

};

int main(){
    
    Box b1(14.34), b2(2,3,4);

    b1.volume();
    b2.volume();

}