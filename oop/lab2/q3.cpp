#include <iostream>
using namespace std;
class Time{

    private:
        int hours, minutes;

    public:
        void getTime(int hr, int min){
            hours = hr;
            minutes = min;
        }


        void addTime(Time t2){
    
            int hrs, mins;

            hrs = this->hours + t2.hours;
            mins = this->minutes + t2.minutes;

            while(mins >=60){
                mins -= 60;
                hrs++;
            }

            cout << "Hours: " << hrs << endl;
            cout << "Minutes: " << mins << endl;

        }

};

int main(){

    Time t1,t2;

    t1.getTime(12,60);
    t2.getTime(12,36);

    t1.addTime(t2);

}