//  Compare two array of integer of fixed size
#include<iostream>
#define size 5
using namespace std;
class Array
{
    public:
        int arr[size];  //array for storing data to Compare
        
    void display(); // to display the data of array
    Array(int *ar); //constructor to initialize Array's arr[] members
    bool operator ==(Array);    // operator function to Compare Array type data
};
void Array :: display()
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
Array :: Array(int *ar)
{
    for(int i=0;i<size;i++)
        arr[i] = ar[i];
}
bool Array :: operator ==(Array a)
{
    for(int i=0;i<size;i++){
        if(arr[i] != a.arr[i])
            return false;
    }
    return true;
}
int main()
{
    int ar1[] = {1,2,3,4,5};
    Array a{ar1};
    int ar[] = {1,2,3,4,5};
    Array b{ar};
   
    
    // Compare as standard method
    if(a == b)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;
    
    
    return 0;
}