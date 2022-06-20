#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string sen;
    fstream myFile;
	myFile.open("test.txt", ios::out|ios::in|ios::app);
	cout<<myFile.tellp();
	myFile.seekp(5,ios::beg);
	cout<<"\n"<<myFile.tellp();
    //myFile << "c++ programming is";
    //cout<<"\n"<<myFile.tellg();
    // cout<<myFile.tellg();
    myFile.seekg(28,ios::beg);
    cout<<"\n"<<char(myFile.get());
    myFile.seekg(-3,ios::end);
    cout<<"\n"<<char(myFile.get());
    cout<<"\n tellg";
    cout<<myFile.tellg();
    getline(myFile, sen);
	 cout<<sen;      
	cout<<myFile.tellg()<<endl;
    myFile.close();
    ifstream file("test.txt");
    char c;
    while(!file.eof()){
          file.get(c);
          cout<<c;
    }
    myFile.close();
    cout<<endl;



    return 0;
}