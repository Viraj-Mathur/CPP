#include<iostream>

using namespace std;

class shape{
    public:
    float x,y;
    void getdata(){
        cin>>x;
        cin>>y;        
    }
    float get_x(){
        return x; 
    }
    float get_y(){
        return y;
    }

    virtual void display_area()=0;  //PURE VIRTUAL FUNCTION!!
};

class triangle:public shape{
    public:
    void display_area(){
        float a;
        a=(x*y)/2;
        cout<<"Area of rectangle: "<<a<<endl;
    }
};

class rectangle: public shape{
    public:
    void display_area(){
        float a;
        a=x*y;
        cout<<"Area of rectangle: "<<a<<endl;
    }
};

int main(){
    shape*s=new triangle;
    cout<<"Enter the values of x and y for triangle: ";
    s->getdata();

    shape*r=new rectangle;
    cout<<"Enter the values of x and y for rectangle: ";
   
    r->getdata();

    s->display_area();
    r->display_area();
    return 0;
}