#include<iostream>
#include<fstream>

using namespace std;

int main() { 
	int count =0; 
	char word[30];
	ifstream fin("secrets.txt"); 
	if(!fin) {cout<<"File Does not Exist";  return 0; } 
	while(!fin.eof()) {                                      // eof – end of the file
		fin>>word; 
		// cout<<word<<"\t";
        cout<<word;
        cout<<" ";
	}
         fin.close();
}
