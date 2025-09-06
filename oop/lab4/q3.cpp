#include <iostream>

typedef std::string string;

class Automobile{

    protected:
        string proDate;
        float price;

    public:

        Automobile(string date, float pri):proDate{date}, price{pri}{
        }

        void printData(){
            std::cout << "Production Date: " << proDate << '\n';
            std::cout << "Price: "  << price << '\n';
        }
};


class Lorry:public Automobile{

    protected:
        float weight;

    public:

        Lorry(string date, float pri, float wt):Automobile(date, pri), weight{wt}{

        }

        void printData(){
            std::cout << '\n' << "Lorry Info:" << '\n';

            Automobile::printData();

            std::cout << "Weight: " << weight << " kg" << '\n';
        }

};


class Taxi:public Automobile{

    protected:
        int seats;

    public:

        Taxi(string date, float pri, int sts):Automobile(date, pri), seats{sts}{

        } 

        void printData(){

            std::cout << '\n' <<"Taxi Info:" << '\n';

            Automobile::printData();

            std::cout << "Seat Capacity: " << seats << '\n';

        }

};

int main(){

    Lorry l1("2025/6/17", 125000, 500);
    Taxi t1("2025/6/15", 310000, 5);

    l1.printData();
    t1.printData();

}
