#include <iostream>
using namespace std;
class Point{

    private:
        int x;
        int y;
    
    public:
        void getData(){
            
            cout << "Enter x coordinate: ";
            cin >> x;
            
            cout << "Enter y coordinate: ";
            cin >> y;

        }


        int operator ==(Point p2){

            if(this->x == p2.x){
                if(this->y == p2.y){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
    
        }
};

int main(){

    Point p1,p2;

    p1.getData();
    p2.getData();

    if(p1==p2){
        cout << "Both Points are equal." << endl;
    }else{
        cout << "Both Points are not equal." << endl;
    }
}