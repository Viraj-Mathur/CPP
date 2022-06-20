#include<iostream>

using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a;
    int b;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    swapp(a,b);
    cout<<"The value of a after swapping is : "<<a<<endl;
    cout<<"The value of b after swapping is : "<<b<<endl;
    return 0;
}