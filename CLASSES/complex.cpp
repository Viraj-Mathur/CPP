#include<iostream>

using namespace std;

class Complex{
    public:
    float a,b;
    void setComplex(){  //initializing object values
         cin>>a;
         cin>>b;
}
    void displayComplex(){
        cout<<a<<"+"<<b<<"i"<<endl;  //to show the complex number
    
    }

    void sum(Complex c1, Complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
};
int main(){
    Complex c1,c2,s;
    cout<<"Enter real and imaginary part of Complex no1: "<<endl;
    c1.setComplex();
    cout<<"Enter real and imaginary part of Complex no2: "<<endl;
    c2.setComplex();
    cout<<"Sum of Complex numbers is: "<<endl;
    s.sum(c1,c2);
    s.displayComplex();
    return 0;
}