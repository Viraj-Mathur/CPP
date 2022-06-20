#include<iostream>

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
    Rectangle *ptr;
    ptr=&r1;
    cout<<"Enter Length: ";
    cin>>ptr->length;
    cout<<"Enter breadth: ";
    cin>>ptr->breadth;
    cout<<"Area is : "<<ptr->area()<<endl;
    cout<<"Parameter is : "<<ptr->parameter()<<endl;
    return 0;
}