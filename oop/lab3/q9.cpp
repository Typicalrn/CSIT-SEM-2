#include <iostream>

class Book{

    private:
        std::string title;
        std::string author;

    public:

        void getData(){
            
            std::cout << "Enter book name: ";
            std::getline(std::cin >> std::ws, title);

            std::cout << "Enter author name: ";
            std::getline(std::cin >> std::ws, author);

        }


        int operator !=(Book b2){
        
            if((this->title != b2.title) || (this->author != b2.author)){
                return 1;
            }else{
                return 0;
            }

        }
};

int main(){

    Book b1, b2;

    b1.getData();
    b2.getData();

    if(b1!=b2){
        std::cout << "The books different." << std::endl;
    }else{
        std::cout << "The books are same." << std::endl;
    }

}