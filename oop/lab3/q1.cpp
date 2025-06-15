#include <iostream>

class Distance{

    private:
        int feet;
        int inches;


    public:
        void getData(){

            std::cout << "Enter feets: ";
            std::cin >> feet;

            std::cout << "Enter inches: ";
            std::cin >> inches;

        }


        Distance operator +(Distance d2){
            
            Distance temp;

           temp.feet = this->feet + d2.feet;
           temp.inches = this->inches + d2.inches;

           while(temp.inches >= 12){

               temp.inches -=12;
               temp.feet++;

           }

           return temp;

        }


        void showData(){
            
            std::cout << "Total Feet: " << feet << std::endl;
            std::cout << "Total Inches: " << inches << std::endl;

        }


}; 

int main(){

    Distance d1, d2, sum;

    d1.getData();
    d2.getData();

    sum = d1 + d2; 
    sum.showData();
    
}