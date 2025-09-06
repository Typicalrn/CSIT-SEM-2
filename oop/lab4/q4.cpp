#include <iostream>
#define PI 3.14

class Shape{
    
    protected:
        float radius;

    public:

        void getData(){
            std::cin >> radius;
        }

};

class Circle:public Shape{

    public:

        void getData(){
            std::cout << "Enter the radius of Circle: ";
            Shape::getData();
        }

        void area(){
            std::cout << "Area of circle: " << PI*radius*radius << '\n'; 
        }

};

class Sphere:public Shape{

    public:
    
        void getData(){
            std::cout << "Enter the radius of Sphere: ";
            Shape::getData();
        }

        void area(){

            std::cout << "Area of sphere: " << 4*PI*radius*radius << '\n';

        }

};

int main(){

    Circle c1;
    Sphere s1;

    c1.getData();
    s1.getData();

    c1.area();
    s1.area();
}
