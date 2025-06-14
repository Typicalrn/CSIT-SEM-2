#include<iostream>
using namespace std;

class counter
{
protected:
    int count;
public:
    counter();
    counter(int c);
    void getCount(){
        cout<<"total no of stds is:"<<count;
    }
    counter operator ++(){
        this->count+=1;
        return *this;
    }
};

counter::counter()
{
    count=0;
}
counter::counter(int c)
{
    count=c;
}

class CountDr:public counter{
    public:
    CountDr operator --(){
        this->count-=1;
        return *this;
    }
};

int main(){
    CountDr c1;
    ++c1;
    ++c1;
    ++c1;
    --c1;
    c1.getCount();
    return 0;
}


