#include<iostream>

using namespace std;

int dev(int a, int b){
    if(b==0)
       throw 1;  //THROW CAN HAVE CHAR INT FLOAT STRING AND EVEN A CLASS!!!
       return a/b; //ELSE     
}
int main(){
    
    int x,y,z;
    cout<<"Enter x: "<<endl;
    cin>>x;
    cout<<"Enter y: "<<endl;
    cin>>y;
    try{
        z=dev(x,y);
        cout<<"Result of division is : "<<z<<endl;

    }
    // catch(...) CAN HANDEL ANY EXCEPTIONS (BUT OFCOURSE IT WON'T GIVE THE USER CLEAR MESSAGE AS THE THROW WOULD NOT BE SHOWN)
    catch(int e){
        cout<<"Error code Division by zero "<<e<<endl;
    }
    
    cout<<"Program Ended!!!";
    
    return 0;
}