#include<iostream>

using namespace std;

class Base{
    public:
    virtual void fun1(){
        cout<<"fun1 from Base"<<endl;
    }
    virtual void fun2(){
        cout<<"fun 2 from Base"<<endl;
    }
};

class Derived: public Base{
    public:
    // FUNCTION OVERRIDING::
    void fun1(){
        cout<<"fun1 from derived class"<<endl;
    }
    void fun2(){
        cout<<"fun2 of derived class"<<endl;
    }

};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    Base*ptr=new Derived;
    ptr->fun1();
    ptr->fun2();
    
    return 0;
}