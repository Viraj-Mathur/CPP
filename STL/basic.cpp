#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1;
    cout<<"Current capacity is: "<<v1.capacity()<<endl;
    // v1.push_back(10);
    // cout<<"Current capacity is: "<<v1.capacity()<<endl;
    // v1.push_back(20);
    // cout<<"Current capacity is: "<<v1.capacity()<<endl;
    // v1.push_back(30);
    // cout<<"Current capacity is: "<<v1.capacity()<<endl;
    for(int i=0;i<=9;i++){
        v1.push_back(10*(i+1)); //adding
        cout<<"Current capacity is: "<<v1.capacity()<<endl;
    }
    for(int i=0;i<v1.size();i++){
        cout<<endl<<v1[i];//size of
    }
    v1.pop_back(); //delete
    
    cout<<endl<<"Element at index 5 is: "<<v1.at(5)<<endl;    //at() gives index value
    cout<<endl<<"After popping Current capacity is: "<<v1.capacity()<<endl;
}
