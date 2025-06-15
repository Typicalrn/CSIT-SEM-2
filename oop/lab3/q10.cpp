#include <iostream>
using namespace std;
class Money{
    private:
        float rupees = 0.0,paisa = 0.0;
    public:
       Money operator +=(Money m1){
           float rup,pai;

           cout << "Enter rupees: ";
           cin >> rup; 
           
           cout << "Enter paisa: ";
           cin >> pai; 

          this->rupees += rup;
          this->paisa += pai;

          while(paisa>=100){

              this->paisa -= 100;
              this->rupees += 1;
          }
       } 

       void showMoney(){
           cout << "Money: \n";
           cout << "Rupees: " << rupees << endl;
           cout << "Paisa: " << paisa << endl;
       }

};

int main(){

    Money m1;

    m1 += m1;
    m1.showMoney();
    m1 += m1;
    m1.showMoney();
}