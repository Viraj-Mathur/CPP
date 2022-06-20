#include<iostream>

using namespace std;

class Father{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

     void parent(){
         a=10;
         b=15;
         c=20;
     }
};

class Child: public Father{
public:
void c1(){
    // a=10;  AS a IS PRIVATE
    b=15;
    c=20;
}
};

class grand_child: public Child{
    public:
    void g1(){
        // a=10;
        b=15;
        c=20;
    }
};

int main(){
    Child c;
    // CANNOT ACCESS a and b
    // c.a=10;
    // c.b=15;  
    c.c=20;
    return 0;
}