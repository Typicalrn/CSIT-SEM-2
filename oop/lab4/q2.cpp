#include <iostream>

typedef std::string string;

class Lecturer{

    protected:
        int ID;
        string name;

    public:

        void readData(){
            std::cout << "Enter teacher ID: ";
            std::cin >> ID;

            std::cout << "Enter teacher Name: ";
            std::getline(std::cin >> std::ws, name);
        }

};


class PartTime:public Lecturer{

    protected:
        float payperhr;

    public:

        void readData(){

            Lecturer::readData();
            
            std::cout << "Enter the pay per hour: ";
            std::cin >> payperhr;
        }


        void printData(){
            
            std::cout << '\n' << "TEACHER INFO:" << '\n';
            std::cout << "ID: " << ID << '\n';
            std::cout << "Name: " << name << '\n';
            std::cout << "Salary: " << payperhr << '\n';

        }

};

class FullTime:public Lecturer{

    protected:
        float paypermonth;

    public:

        void readData(){

            Lecturer::readData();

            std::cout << "Enter the pay per month: ";
            std::cin >> paypermonth;

        }

        void printData(){
            
            std::cout << '\n' << "TEACHER INFO:" << '\n';
            std::cout << "ID: " << ID << '\n';
            std::cout << "Name: " << name << '\n';
            std::cout << "Salary: " << paypermonth << '\n';

        }

};


int main(){

    PartTime t1;
    FullTime t2;

    t1.readData();
    t2.readData();

    t1.printData();
    t2.printData();

}
