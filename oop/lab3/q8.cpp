#include <iostream>

class Fraction{

    private:
        float numerator;
        float denominator;

    public:
        void getData(){
            std::cout << "Enter numerator: ";
            std::cin >> numerator;

            std::cout << "Enter denominator: ";
            std::cin >> denominator;
        }

        Fraction operator /(Fraction f2){
            Fraction temp;

            temp.numerator = this->numerator * f2.denominator;
            temp.denominator = f2.numerator * this->denominator; 

            return temp;
        }

        void showData(){
            std::cout << "Numerator: " << numerator << std::endl;
            std::cout << "Denominator: " << denominator << std::endl;
        }

};

int main(){
    
    Fraction f1,f2, f3;

    f1.getData();
    f2.getData();
    
    f3 = f1/f2;

    f3.showData();
}