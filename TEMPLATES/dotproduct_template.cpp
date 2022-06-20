#include<iostream>

using namespace std;
template<class T>  
class vector{
public:
T * arr;             //USE T WHERE YOU HAVE USED CUSTOM DATA TYPE
int size;
vector(int m){
    size=m;
    arr= new T[size];
}
// int dotProduct(vector &v){
T dotProduct(vector &v){
    T d=0;
    for(int i=0;i<size;i++){
        d+= this->arr[i]*v.arr[i];
    }
        return d;

}
};

int main(){
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=5;
    // v1.arr[2]=6;

    // vector v2(3);
    // v2.arr[0]=2;
    // v2.arr[1]=3;
    // v2.arr[2]=6;
    vector <float>v1(3); //SPECIFYING VECTOR WITH float
    v1.arr[0]=1.4;       //YOU CAN USE INT CHAR OR ANYTHING
    v1.arr[1]=3.3;
    v1.arr[2]=0.1;

    vector <float>v2(3);  //SPECIFYING VECTOR WITH FLOAT
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;

    float a=v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}