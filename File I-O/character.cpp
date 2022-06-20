#include <iostream> 
#include<fstream> 
using namespace std;
int main() { 
char c; 
ifstream fin("secrets.txt"); 
	if(!fin) {
    cout<<"File Does not Exist";  return 0; 
    } 
	while(!fin.eof()) { // eof – end of the file
		fin.get(c);  //get is used!!!
        cout<<c;
    }
    fin.close();
}