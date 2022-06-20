#include<iostream>

using namespace std;

class Car{
    public:
    virtual void start() =0;  //PURE VIRTUAL CLASS
        //cout<<"Car started"<<endl;
    
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
    // Car a; OBJECT OF ABSTARCT CLASS IS NOT ALLOWED!!
    Car *p=new Brezza();  //CAN MAKE POINTER OF VIRTUAL CLASS
    p->start();
    Car *ptr=new Zen();
    ptr->start();
    return 0;
}