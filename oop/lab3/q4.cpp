#include <iostream>

class Counter{
    private:
        int count = 0;
    public:
    void showCount(){
        std::cout << "Counter: " << count << std::endl;
    }
    int operator ++(){
        this->count++;
    }
};

int main(){
    Counter c1;
    c1.showCount();
    ++c1;
    c1.showCount();
    ++c1;
    c1.showCount();
    ++c1;
    c1.showCount();
    ++c1;
    c1.showCount();
}