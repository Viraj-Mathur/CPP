#include<iostream>

using namespace std;

 class base{
    public:
    virtual void fun(){   //######### WITHOUT VIRTUAL, FUN OF BASE WOULD BE CALLED#########   WHEN DEALING WITH POINTERS
        cout<<"fun of base";
    }
};
class derived: public base{
    public:
    void fun(){
        cout<<"fun of derived";
    }
};

int main(){
    // base *p=new derived();
    // p->fun();    
    
    // derived d;
    // d.fun();
    derived d;
    base*ptr=&d;
    ptr->fun();                                                            
    return 0;
}
