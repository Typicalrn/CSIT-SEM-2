#include <iostream>
using namespace std;
class Book{

    private:
        string title,author;

    public:

        void getData(){
            
            cout << "Enter book name: ";
            getline(cin >> ws, title);

            cout << "Enter author name: ";
            getline(cin >> ws, author);

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
        cout << "The books different." << endl;
    }else{
        cout << "The books are same." << endl;
    }

}