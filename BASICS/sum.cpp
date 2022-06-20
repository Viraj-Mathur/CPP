#include<iostream>

using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    cout<<"Sum of first "<<n<<"Natural number is "<<sum<<endl;
    return 0;
}