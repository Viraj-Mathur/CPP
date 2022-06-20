#include<iostream>
//Program to check prime numbers!!
using namespace std;

int main(){
    int n,a=0;
    cout<<"Enter a number";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0)
        a++;
    }
    if(a==2)
    cout<<"It is a prime number\n";
    else
    cout<<"It is not a prime number";
    return 0;
}