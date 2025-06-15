#include <iostream>
using namespace std;

class BankAccount{

    private:
        string accountHolder;
        int accountNumber;
        float balance = 0.0;

    public:

        void deposit(){
            float dp; 

            cout << "Enter deposit amount: ";
            cin >> dp; 

            balance += dp;
        }

        int withdraw(){
            
            float wd;

            cout << "Enter withdraw amount: ";
            cin >> wd;

            if(wd > balance){
                cout << "INSUFFICIENT BALANCE. EXITING PROGRAM." << endl;
                return 1;

            }
            
            balance -= wd; 

            return 0;

        }


        void display(){

            cout << "Balance:" << balance << endl; 

        }

};


int main(){

    BankAccount b1;
    
    b1.display();
    b1.deposit();
    b1.display();

    if(b1.withdraw()){
        return 0;
    }
    b1.display();

}