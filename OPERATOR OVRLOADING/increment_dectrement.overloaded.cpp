#include<iostream>

using namespace std;

class IncDec{
    int a,b;
    public:
    void accept(){
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
    }

    void operator -(){ //FOR DECREMENT
         a--;
         b--;
    }
    void operator +(){ //FOR INCREMENT
        a++;
        b++;
    }
    void display(){
        cout<<"A is: "<<a<<endl;
        cout<<"B is: "<<b<<endl;
    }
};

int main(){
    IncDec d;
    d.accept();
    -d;
    cout<<"After decrement: "<<endl;
    d.display();

    +d;
    cout<<"After increment: "<<endl;
    d.display();
    return 0;
}