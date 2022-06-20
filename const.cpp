#include<iostream>

using namespace std;
class Rectangle{
    private:
    int l;
    int b;

    public:
    //CONSTRUCTORS!!!
    Rectangle(){  //NON PARAMETRISED CONSTRUCTOR 
        l=1;
        b=1;
    }
    Rectangle(int l,int b){   //PARAMTERISED CONSTRUCTOR
        setLength(l);  //MUTATORS
        setBreadth(b);  
    }
    void setLength(int len){
        if(len>0)
           l=len;
           else l=1;     
    }
    void setBreadth(int br){
        if(br>0)
            b=br;
            else
            br=1;
    }
    int getLength(){  //ACCESSORS
        return l;
    }
    int getBreadth(){
        return b;
    }
    int area(){   //facilitator
        return l*b;
    }
    int perimeter(){  //facilitator
        return 2*(l+b);
    }

};
int main(){    
    int a,b;
    cout<<"Enter length: ";
    cin>>a;
    cout<<"Enter breadth: ";
    cin>>b;         
    Rectangle r1(a,b);  //PARAMETRISED CONSTRUCTOR  IN WORKING
    cout<<"The area is: "<<r1.area()<<endl;  
    return 0;
}