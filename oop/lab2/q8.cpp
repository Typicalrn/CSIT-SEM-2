#include <iostream>
using namespace std;

class Distance{

    private:
        int feet;
        int inches;


    public:
        void getData(){

            cout << "Enter feets: ";
            cin >> feet;

            cout << "Enter inches: ";
            cin >> inches;

        }


        Distance add(Distance d1, Distance d2){
            
            Distance temp;

           temp.feet = d1.feet + d2.feet;
           temp.inches = d1.inches + d2.inches;

           while(temp.inches >= 12){

               temp.inches -=12;
               temp.feet++;

           }

           return temp;

        }


        void showData(){
            
            cout << "Total Feet: " << feet << endl;
            cout << "Total Inches: " << inches << endl;

        }


}; 

int main(){

    Distance d1, d2, sum;

    d1.getData();
    d2.getData();

    sum = sum.add(d1,d2); 
    sum.showData();
    
}