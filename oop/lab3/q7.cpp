#include <iostream>
using namespace std;
class Complex{

    private:
        int img; 
        int real;


    public: 
        
        void getData(){
            cout << "Enter imaginary part: ";
            cin >> img;

            cout << "Enter real part: ";
            cin >> real;
        }


        Complex operator *(Complex c2){

           Complex temp;

           temp.real = this->real * c2.real;
           temp.img = this->img * c2.img;

           return temp;
        }

        void showData(){
        
            cout << "Real: " << real << endl;
            cout << "Imaginary: " << img << endl;

        }
};

int main(){

    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = c1 * c2;

    c3.showData();

}