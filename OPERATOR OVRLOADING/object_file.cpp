#include<iostream>
#include<fstream>

using namespace std;
class student{
    int roll;
    string name;
    int total_marks;
    public:
    void getData(){
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter total marks: ";
        cin>>total_marks;
    }
    void displayData(){
        cout<<"Roll no : "<<roll;
        cout<<"Name : "<<name;
        cout<<"Total marks: "<<total_marks;
    }

};

int main(){
student s1,s2,s3;

ofstream file1;
file1.open("student.txt", ios::out);
cout<<"\n File created successfully"<<endl;
s1.getData();
file1.write((char *)&s1,sizeof(s1));
s2.getData();
file1.write((char *)&s2,sizeof(s2));
s3.getData();
file1.write((char *)&s3,sizeof(s3));
file1.close();
cout<<"File closed successfully"<<endl;

ifstream file2;
file2.open("student.txt", ios:: in);
file2.read((char *)&s1,sizeof(s1));
s1.displayData();
file2.read((char *)&s2,sizeof(&s2));
s2.displayData();
file2.read((char *)&s3,sizeof(&s3));
s3.displayData();
file2.close();



    return 0;
}