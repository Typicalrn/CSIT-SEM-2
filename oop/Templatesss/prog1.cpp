#include<iostream>
using namespace std;
template <class T>
T getMax(T x,T y){
    return (x>y)?x:y;
}
int main(){
    cout<<getMax<int>(10,20);
    cout<<endl;
    cout<<getMax<float>(1.30f,20.20f);
    cout<<endl;
    cout<<getMax<char>('a','b');
    cout<<endl;
    return 0;
}