#include <iostream>
using namespace std;
class Rectangle{
    private:
        float length,breadth;
    public:
        Rectangle operator >>(Rectangle r1){
            cout << "Enter length: ";
            cin >> length; 
            
            cout << "Enter breadth: ";
            cin >> breadth; 
        }
        void showData(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length*breadth << endl;
        } 
};

int main(){
    Rectangle r1;
    r1 >> r1;
    r1.showData();
}