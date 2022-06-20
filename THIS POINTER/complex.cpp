#include<iostream>

using namespace std;
class Complex{
    int real, imaginary;
    public:
    void getData(){
        cout<<"the real part is :"<< real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

    void setdata(int a, int b){
        real=a;
        imaginary=b;
    }
};

int main(){
     Complex c1;
     //Complex *ptr =&c1;
     Complex *ptr =new Complex;  ///USING NEW KEYWORD!!
     //(*ptr).setdata(1,54);  IS EXACTLY SAME AS:
      ptr->setdata(1,54);
     (*ptr).getData();
     
    return 0;
}