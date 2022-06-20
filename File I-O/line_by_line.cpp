#include <iostream> 
#include<fstream> 
using namespace std;
int main() { 
	char c;
	string line;
	ifstream fin("secrets.txt"); 
	if(!fin) {cout<<"File Does not Exist";  return 0; };
	while(!fin.eof()) { // eof – end of the file
		getline(fin, line);
		cout<<line; // print text on screen
		cout<<'X';
	}
fin.close();}
