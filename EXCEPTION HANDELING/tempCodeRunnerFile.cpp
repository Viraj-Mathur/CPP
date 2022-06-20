#include<iostream>

using namespace std;
void translate(int a) throw(int,char){
    if (a==0)
    throw a;
    else if(a==1){
        throw 'a';
    }
    else throw 10.08;
}
int main(){
    try{
        translate(4.08);
    }
    catch(int u){
        cout<<"int exception"<<u;

    }

    catch(char g){
        cout<<"char exception"<<g;

    }
    catch(...){
        cout<<"Default exception";

    }
    return 0;
}