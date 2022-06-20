#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, b;

public:
    Rectangle(int l=1, int b=1){

    setLength(l);
    setBreadth(b);
    }
    Rectangle(Rectangle &r);
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle(); // DESTRUCTOR!!
};

int main()
{
    Rectangle r1;
    cout<<"Length is "<<r1.getLength()<<endl;
    cout<<"Breadth is "<<r1.getBreadth()<<endl;
    cout<<"Area is "<<r1.area()<<endl;
    if(r1.isSquare())
    cout<<"It is a Square"<<endl;
    else
    cout<<"It is not a square"<<endl;
}
//USING SCOPE RESOLUTION!!!
void Rectangle::setLength(int l){
    if(l>0)
    l=l;
    else
    l=1;
}
void Rectangle::setBreadth(int b){
    if(b>0)
    b=b;
    else
    b=1;
}
int Rectangle::area(){
    return l*b;
}
int Rectangle::perimeter(){
    return 2*(l+b);
}
bool Rectangle::isSquare(){
    return l==b;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed"<<endl;
}

