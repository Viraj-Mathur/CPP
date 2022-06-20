#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file;
    file.open("test.txt");
    int count=0;
    int lines=0;
    char c;
    string len[80];
    file.seekg(0,ios::beg);
    while(!file.eof()){
        file.get(c);
        cout<<c;
        if(c==' '|| c=='\n'){
        count++;
        }
    }
    // while(!file.eof()){
    //      getline(file,len);
    //      lines++;
    // }
    cout<<"\n"<<count;
    cout<<"\n"<<lines;

    return 0;
}