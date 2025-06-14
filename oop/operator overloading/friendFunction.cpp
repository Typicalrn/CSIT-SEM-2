#include<iostream>
using namespace std;

class triangle
{
private:
    float a,circum,area;
public:
    void SetA(float length){
        a=length;
        circum=a*3;
        area=(1.73*a*a)/4;
    }
    friend void print(triangle);
};

void print(triangle et){
    cout<<"circumference is:"<<et.circum<<endl;
    cout<<"area is:"<<et.area<<endl;
}
int main(){
    triangle et;
    et.SetA(3);
    print(et);

}

