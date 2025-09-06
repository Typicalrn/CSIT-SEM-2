#include<iostream>
using namespace std;
template <class T1,class T2>
    class Student{
        protected:
            T1 x; T2 y;
        public:
            Student(T1 a,T2 b){
                x=a;y=b;
            }
            void getdata(){
                cout<<x<<endl<<y;
            }
    };
int main(){
    Student <int,double>s1(10,22.22f);
    Student <float,int>s2(10.10f,22);
    s1.getdata();
    s2.getdata();
    return 0;
}