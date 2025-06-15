#include <iostream>

class Student{

    private:
        int roll;
        std::string name;

    public:
        void getData(){
        
            std::cout << "Enter student name: ";
            std::getline(std::cin >> std::ws, name);

            std::cout << "Enter student roll no. : ";
            std::cin >> roll; 

        }

        int operator <<(Student s1){
        
            std::cout << "Name: " << s1.name << std::endl;
            std::cout << "Roll: " << s1.roll << std::endl;

        }

};

int main(){

    Student s1;

    s1.getData();

    std::cout << "Student Info:" << std::endl;
    s1<<s1;

}