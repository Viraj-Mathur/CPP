#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1;
    s1="Hello";
    string s2=" World";
    string s3;
    s3=s1+s2;
    cout<<s1<<endl<<s2<<endl<<s3<<endl;
    string s5;
    s5=s1+'o';
    cout<<s5;
      
    // cout<<"What is your name? : ";
    // string s4;
    // cin>>s4;
    // cout<<"Hello, "<<s4;
    return 0;
}