#include<iostream>
// Complex Number code using operator overloading
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    // Complex add(Complex x){
        Complex operator+(Complex x){  //OPERATOR OVERLOADING
        Complex temp;
        temp.real= real+x.real;
        temp.img= img+x.img;
        return temp;
    }
};


int main(){
    int a1,a2,b1,b2;
    cout<<"Enter real part of Complex no 1: "<<endl;
    cin>>a1;
    cout<<"Enter imaginary part of Complex no 1: "<<endl;
    cin>>b1;
    cout<<"Enter real part of Complex no 2: "<<endl;
    cin>>a2;
    cout<<"Enter imaginary part of Complex no 2: "<<endl;
    cin>>b2;

    Complex c1(a1,b1);
    Complex c2(a2,b2);
    Complex c3;
    Complex c4;


    // c3=c1.add(c2); //USING C2 AS A PARAMETER INSTEAD OF THIS
    c3=c2+c1;
    // c4=c2+c1; 
    cout<<"The addition of "<<c1.real<<"+"<<c1.img<<"i + "<<c2.real<<"+"<<c2.img<<"i is: "<<endl;
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;   
    // cout<<c4.real<<"+"<<c4.img<<"i"<<endl; 


    return 0;
}