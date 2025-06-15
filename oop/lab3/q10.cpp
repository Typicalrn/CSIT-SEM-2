#include <iostream>

class Money{

    private:
        float rupees = 0.0;
        float paisa = 0.0;

    public:
       Money operator +=(Money m1){

           float rup;
           float pai;

           std::cout << "Enter rupees: ";
           std::cin >> rup; 
           
           std::cout << "Enter paisa: ";
           std::cin >> pai; 

          this->rupees += rup;
          this->paisa += pai;

          while(paisa>=100){

              this->paisa -= 100;
              this->rupees += 1;

          }

       } 

       void showMoney(){

           std::cout << "Money: \n";
           std::cout << "Rupees: " << rupees << std::endl;
           std::cout << "Paisa: " << paisa << std::endl;

       }

};

int main(){

    Money m1;

    m1 += m1;
    m1.showMoney();
    
    m1 += m1;
    m1.showMoney();
}