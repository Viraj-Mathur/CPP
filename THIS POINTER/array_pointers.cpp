#include<iostream>

using namespace std;
class ShopItem{
    int id;
    int price;
    
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getdata(){
         cout<<"code of this item is: "<<id<<endl;
         cout<<"Price of the item is: "<<price<<endl;

    }
    
};

int main(){
    int size=3;
    // int *ptr = &size;
    // int *ptr = new int [30];

    // //ARRAY OF POINTERS!!!!
    ShopItem *ptr=new ShopItem[size];
    ShopItem *ptrTemp=ptr;
    int p,q;
    for(int i=0; i<size;i++){
        cout<<"Enter Id and price: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for(int i=0;i<size;i++){
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getdata();
    }
    return 0;
}