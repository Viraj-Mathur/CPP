#include<iostream>

using namespace std;
class Complex{
    public:
    int real;
    int img;

    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    Complex operator - (Complex x){
        Complex temp;
        temp.real=real-x.real;
        temp.img=img-x.img;
        return temp;
    }
     
};
int main(){
    int a1,a2,b1,b2;
    cout<<"Enter real part of Complex no.1: ";
    cin>>a1;
    cout<<"Enter imaginary part of Complex no.1: ";
    cin>>b1;
    cout<<"Enter real part of Complex no.2: ";
    cin>>a2;
    cout<<"Enter imaginary part of Complex no.2: ";
    cin>>b2;   

    Complex c1(a1,b1);
    Complex c2(a2,b2);
    Complex c3;
    c3=c1-c2;
    cout<<"The subtraction of ("<<c1.real<<"+"<<c1.img<<"i)-("<<c2.real<<"+"<<c2.img<<"i) is: "<<endl;
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
    return 0;
}