#include<iostream>

using namespace std;

    class A{
         int a;
         public:
         void setData(int a){
            //   a=a; THIS WILL GIVE A GARBAGE VALUE 
            //SO TO PREVENT THIS  THIS POINTER IS USED!!
              this->a=a;  //THIS POINTER!!!
         }

         void getData(){
             cout<<"The value of a is "<<a<<endl;
         }
    };

int main(){
    A a;
    a.setData(5);
    a.getData();
    return 0;
}