#include<iostream>

using namespace std;

template<class T1>
void bubble(T1 a[], int n){
    for(int i=0;i=n-1;i++)
        for(int j=n-1;i<j;j--)
             if(a[j] < a[j-1]){
                 swap(a[j],a[j-1]);  //TEMPLATE FUNCTION IS CALLED
             }
    
}
template<class X>
void swap(X &a, X &b){
    X temp=a;
    a=b;
    b=temp;
}

int main(){
    int x[5]= {10,40,30,40,20};
    float y[5]= {3.3,5.5,1.1,2.2,4.4};

    bubble(x,5);
    bubble(y,5);

    cout<<"Unsorted aaray A: "<<x[5]<<endl;
    cout<<"Sorted array A : ";
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

    cout<<"Unsorted aaray B: "<<y[5]<<endl;
    cout<<"Sorted array B : ";
    for(int j=0;j<5;j++){
        cout<<y[j]<<" ";
    }
    cout<<endl;

    return 0;
}