#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m.insert(pair<int,string>(1,"Clark"));
    m.insert(pair<int,string>(2,"Diana"));
    m.insert(pair<int,string>(3,"Bruce"));

    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;  //first=key;second=value
    }
    int a; 
    cout<<"Enter key of person you wish to find: ";
    cin>>a;

    if(a==1||a==2||a==3){
        map<int,string>::iterator itr1;
        itr1=m.find(a);
        // cout<<itr1->first<<" "<<itr1->second<<endl;
        cout<<itr1->second<<endl;
    }
    else
    cout<<"INVALID KEY!!!";
    return 0;
}