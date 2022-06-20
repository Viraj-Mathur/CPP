#include<iostream>

using namespace std;
template<class T>
T Max(T x, T y){
    return x>y?x:y;
}
int main(){
    
    cout<<Max(-2.6,7.7)<<endl;
    cout<<Max('a','z')<<endl;

    int a,b;
    cout<<"Enter a1: "<<endl;
    cin>>a;
    cout<<"Enter a2: "<<endl;
    cin>>b;
    
    cout<<"The greatest of the two no is: "<<Max(a,b)<<endl;
    return 0;
}