//FOR REFERENCE GO TO: https://m.cplusplus.com/reference/vector/vector/
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;  //AUTOMATICALLY MANAGES SIZES
    int element,size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element); //ADD ELEMENT AT THE END
    }
    // vec1.pop_back();  //IT WILL DELETE THE LAST ELEMENT OF THE VECTOR
   
    // FR ITERATIONS :
    vector<int> :: iterator iter= vec1.begin();
    vec1.insert(iter+1,2,200); //iter+1 equals the second element,2 indicates how many, 200 is the element added!!
   
    display(vec1);

    return 0;
}