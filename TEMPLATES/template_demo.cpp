#include<iostream>

using namespace std;

template<class T>

class abc{
    public:
    T data;
    abc(T a){
        data=a;
    }

    // int display(){
    //     cout<<data;
    //     return data;
    // }
    
    int display();
};
template<class T>
int abc<T> :: display(){
        cout<<data;
        return data;
    }
    
int main(){

    abc<int> a(5);
    //cout<<a.data<<endl;
    a.display();
    
    // abc<char> b('c');
    // b.display();
    
    return 0;
}