#include<iostream>

using namespace std;
// OG METHOD!!!
// float funAvg(float a,float b){
//     float avg= (a+b)/2;
//     return avg;
// }

template<class T1,class T2>
//  float funAvg(float a,float b){
    float funAvg(T1 a,T2 b){
    float avg= (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    float b;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    float f;
    f=funAvg(a,b);
    cout<<"The average is : "<<f<<endl;
    return 0;
}