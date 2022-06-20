#include<iostream>

using namespace std;

class Car{
    public:
    virtual void start(){
        cout<<"Car started"<<endl;
    }
};

class Brezza: public Car{
    public:
    void start(){
        cout<<"Brezza started"<<endl;
    }
};

class Zen: public Car{
    public:
    void start(){
        cout<<"Zen started"<<endl;
    }
};

int main(){
    // OUTPUT WILL BE CAR STARTED IF VIRTUAL FUNCT NOT USED!!!
    Car *p=new Brezza();
    p->start();
    Car *ptr=new Zen();
    ptr->start();
    return 0;
}