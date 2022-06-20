#include<iostream>

using namespace std;

int main(){
    int n,arr[7];
    cout<<"Enter the number of elements(from 1 to 10): ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Array "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    for(int  i=0;i<n;i++){
        if(arr[0] < arr[i]){
            arr[0]=arr[i];
        }
    }

    cout<<"Largest element = "<<arr[0];
    return 0;
}