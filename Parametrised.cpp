#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Default Parent "<<endl;
 }
    Base(int x){
        cout<<"Paramaterised Parent "<<x<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Default of derived"<<endl;

    }
    Derived(int a){
        cout<<"Parameterised of derived "<<a<<endl;

    }
    Derived(int x,int y): Base(x){
        cout<<"Paramaterised Child "<<x<<endl;
    }
};


int main(){
    //Derived d;
    // Base b(10);
    Derived d(10,15);
    return 0;
}