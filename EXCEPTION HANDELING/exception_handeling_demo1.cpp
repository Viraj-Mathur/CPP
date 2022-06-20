#include<iostream>

using namespace std;

int main(){
    int x=10, y=0,z;
    
    try{
        if(y==0)
        throw 1;  //THROWING THE ERROR IN THE FORM OF INTEGER TO CATCH.... 
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e){  //CATHING THE THROWN INTEGER!!
        cout<<"Division by zero"<<endl<<e;
    }
    return 0;
}