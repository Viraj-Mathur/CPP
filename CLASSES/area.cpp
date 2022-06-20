#include<iostream>
//##### AREA & PARAMETER OF RECTANGLE USING CLASSES
using namespace std;

    class Rectangle{
        public:
        int length;
        int breadth;

        int area(){
            return length*breadth;
        }
        int parameter(){
            return (2*(length+breadth));
        }
    };

int main(){
    Rectangle r1;
    Rectangle r2;
    cout<<"Enter length of rectangle : ";
    cin>>r1.length;
    cout<<"Enter breadth of rectangle : ";
    cin>>r1.breadth;
    
    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"The parameter is: "<<r1.parameter()<<endl;
    return 0;
}