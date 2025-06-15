#include <iostream>
using namespace std;
class Time{

    private:
        int hours;
        int minutes;

    public:

        void getTime(){

            cout << "Enter Hours: ";
            cin >> hours;

            cout << "Enter Minutes: ";
            cin >> minutes;

        }

        Time operator -(Time t2){
            
            Time temp;

            temp.hours = this->hours - t2.hours;
            temp.minutes = this->minutes - t2.minutes;

            while(temp.minutes < 0){
                
                temp.minutes = 60 + temp.minutes;
                temp.hours--;

            }

            return temp;

        }


        void showTime(){
            
            cout << "Total Hours: " << hours << endl;
            cout << "Total Minutes: " << minutes << endl;

        }

};

int main(){

    Time t1,t2,diff;

    t1.getTime();
    t2.getTime();


    diff = t1 - t2;
    diff.showTime();

}