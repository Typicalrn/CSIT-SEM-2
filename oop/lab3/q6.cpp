#include <iostream>

class Rectangle{

    private:
        float length;
        float breadth;

    public:

        Rectangle operator >>(Rectangle r1){
            std::cout << "Enter length: ";
            std::cin >> length; 
            
            std::cout << "Enter breadth: ";
            std::cin >> breadth; 
        }

        void showData(){
        std::cout << "Length: " << length << std::endl;
        std::cout << "Breadth: " << breadth << std::endl;

        std::cout << "Area: " << length*breadth << std::endl;

        } 

};

int main(){

    Rectangle r1;


    r1 >> r1;

    r1.showData();

}