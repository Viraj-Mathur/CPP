#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string sen;
    fstream myFile;
    myFile.open("secrets.txt", ios::out|ios::in);
    int pos;
    myFile << "c++ programming is";
    myFile.seekg(0,ios::beg);
    getline(myFile, sen);
    pos=myFile.tellg();
    cout<<pos;
    cout<<sen;      
    myFile.close();

    return 0;
}