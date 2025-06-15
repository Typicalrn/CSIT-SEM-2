#include <iostream>

class Complex{

    private:
        int img; 
        int real;


    public: 
        
        void getData(){
            std::cout << "Enter imaginary part: ";
            std::cin >> img;

            std::cout << "Enter real part: ";
            std::cin >> real;
        }


        Complex operator *(Complex c2){

           Complex temp;

           temp.real = this->real * c2.real;
           temp.img = this->img * c2.img;

           return temp;
        }

        void showData(){
        
            std::cout << "Real: " << real << std::endl;
            std::cout << "Imaginary: " << img << std::endl;

        }
};

int main(){

    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = c1 * c2;

    c3.showData();

}