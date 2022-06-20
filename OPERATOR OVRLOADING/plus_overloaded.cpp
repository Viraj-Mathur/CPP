#include<iostream>

using namespace std;
class Marks{
    public:
    int marks;
    int extra_marks;
    
    Marks(int m1=0,int m2=0){
        marks=m1;
        extra_marks=m2;
    }
    
    void display(){
        cout<<"Total Marks of Subject A after adding extra marks are: "<<marks<<endl;
        cout<<"Total Marks of Subject B after adding extra marks are:"<<extra_marks<<endl;
    }
    
    Marks operator + (Marks x){
        Marks temp;
        temp.marks=marks+x.marks;
        temp.extra_marks= extra_marks+x.extra_marks;
        return temp ;
    }
        

};


int main(){
   int a,b,c,d;
   cout<<"Enter marks of subject A: ";
   cin>>a;
   cout<<"Enter extra marks of subject A: ";
   cin>>c;
   cout<<"Enter marks of subject B: ";
   cin>>b;
   cout<<"Enter marks of subject B: ";
   cin>>d;
    Marks m1(a,b), m2(c,d);
    Marks m3=m1+m2; 
    m3.display();
    return 0;
}
