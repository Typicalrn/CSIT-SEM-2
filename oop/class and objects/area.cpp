#include<iostream>

using namespace std;

class area
{
private:
    int length,breadth;
    /* data */
public:
    void setlength(int len){//setter--> ot set the data members
        length=len;
        
    }
    void setbreadth(int bred){//setter--> ot set the data members
        breadth=bred;
        
    }

    void getlength(){//getter --> to get the data members
        cout<<"Enter the length:"<<length<<endl;  
    }
    void getbreadth(){//getter --> to get the data members
        cout<<"Enter the breadth:"<<breadth<<endl;    
    }
    void getArea(){//getter --> to get the data members
        cout<<"The area is: "<<length*breadth<<endl;    
    }
    
};

int main(){//start of main function
    area a1,a2;
    a1.setlength(12);
    a1.setbreadth(3);
    a1.getArea();

    
}

