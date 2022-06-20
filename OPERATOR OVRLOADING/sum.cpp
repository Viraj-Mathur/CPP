#include<iostream>
using namespace std;

class sum{
    int a;
    public:
    sum(){
        int m=0;
    }
    sum(int m){
        a=m;
    }
    void display(){
        cout<<"Sum is: "<<a;
    }
    sum operator + (sum x){
        sum s;
        s.a=a+x.a;
        return s;
    }



};
int main(){
    sum s1(5);
    sum s2(6);
    sum s3;
    s3=s1+s2;
    s3.display();
    return 0;

}