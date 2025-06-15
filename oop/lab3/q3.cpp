#include <iostream>

class Point{

    private:
        int x;
        int y;
    
    public:
        void getData(){
            
            std::cout << "Enter x coordinate: ";
            std::cin >> x;
            
            std::cout << "Enter y coordinate: ";
            std::cin >> y;

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
        std::cout << "Both Points are equal." << std::endl;
    }else{
        std::cout << "Both Points are not equal." << std::endl;
    }
}