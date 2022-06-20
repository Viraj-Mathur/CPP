#include<iostream>

using namespace std;

class shape{
    public:
    virtual float area()=0;
    virtual float parameter()=0;

    
};

class Rectangle: public shape{
    private:
    float len;
    float breadth;
    public:
    Rectangle(int l=1,int b=1){
        len=l;
        breadth=b;
    }
        float area(){
            return len*breadth;
        }
        float parameter(){
            return 2*(len+breadth);
        }
};

class Circle:public shape{
    private:
    float radius;
    public:
    Circle(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
    float parameter(){
        return 2*3.14*radius;
    }
};

int main(){
    
    shape *s=new Rectangle(15,30);
    cout<<"Area of rectangle is: "<<s->area()<<endl;
    cout<<"Parameter of rectangle is: "<<s->parameter()<<endl;

    s=new Circle(20);
    cout<<"Area of circle is "<<s->area()<<endl;
    cout<<"Parameter of circle is "<<s->parameter()<<endl;
    return 0;
}