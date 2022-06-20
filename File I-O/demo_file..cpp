#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

ifstream read; //declaring the object
string a; //declaring a string object

//opening the text file:
read.open("vm.txt");

while(read.eof()==0){  //using while loop to read all the lines
     getline(read,a);
     cout<<a<<endl;
}
    return 0;
}