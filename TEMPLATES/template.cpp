#include<iostream>

using namespace std;
//CLASS TEMPLATE WITH MULTIPLE(COMMA SEPARATED)PARAMETERS(ONE,TWO,THREE , SO ON...)
// template<class T1,class T2,class T3, ....>
template<class T1, class T2>
class abc{
    public:
    T1 data1;
    T2 data2; 
    
    abc(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<" "<< data2;
        cout<<"\n";
    }
};
int main(){
    abc <int,char>a1(1,'c');
    abc<string,float>a2("viraj",10.89);
    a1.display();
    a2.display();
    return 0;
}
