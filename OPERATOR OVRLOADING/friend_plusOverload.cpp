#include <iostream>

using namespace std;
class dist{
    public:
    int feet,inch;
    dist(){
        this->feet=0;
        this->inch=0;
    }
    dist(int f,int i){
        this->feet=f;
        this->inch=i;
    }
    friend dist operator + (dist x,dist y);   //**FRIEND FUNCTION ALWAYS REQUIRES TWO OBJECTS!!!!**
};
dist operator + (dist x,dist y){
    dist temp;
    temp.feet=x.feet+y.feet;
    temp.inch=x.inch+y.inch;
    return temp;
}

int main()
{
    dist d1(8,9);
    dist d2(2,1);
    dist d3;
    d3=d1+d2;
    cout<<"Total distance: "<<d3.feet<<" and "<<d3.inch<<endl;

    return 0;
}
