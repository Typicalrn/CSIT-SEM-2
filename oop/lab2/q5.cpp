#include <iostream>
using namespace std;


class Person{

    private:
        string name;
        int age;

    public:

        void getInfo(){
            
            cout << "Enter your name: ";
            getline(cin >> ws, name);

            cout << "Enter your age: ";
            cin >> age;

        }


        void showInfo(){
            cout << "\n"; 
            cout << "YOUR INFO:" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;

        }


        void checkAge(){
        
            if(age>=18){
                cout << "YOU ARE ELIGIBLE TO VOTE." << endl;
            }
            else{
                cout << "YOU ARE NOT ELIGIBLE TO VOTE." << endl;
            }

        }

};


int main(){

    Person p1;

    p1.getInfo();
    p1.showInfo();

    p1.checkAge();

}