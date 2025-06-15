#include <iostream>
using namespace std;
class Fraction{

    private:
        float num,deno;

    public:
        void getData(){
            cout << "Enter Numerator: ";
            cin >> num;

            cout << "Enter Denominator: ";
            cin >> deno;
        }

        Fraction operator /(Fraction f2){
            Fraction temp;

            temp.num = this->num * f2.deno;
            temp.deno = f2.num * this->deno; 

            return temp;
        }

        void showData(){
            cout << "Numerator: " << num << endl;
            cout << "Denominator: " << deno << endl;
        }

};

int main(){
    
    Fraction f1,f2, f3;

    f1.getData();
    f2.getData();
    
    f3 = f1/f2;

    f3.showData();
}