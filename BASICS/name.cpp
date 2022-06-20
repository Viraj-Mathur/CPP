#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"May I know your name? ";
    //cin>>name;
    getline(cin,name); //FOR READING MORE THAN ONE WORD!!!
    cout<<" Welcome "<<name<<"!";
    return 0;
}