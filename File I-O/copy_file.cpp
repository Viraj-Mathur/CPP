#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string l;
	ifstream i("Lantern.txt");
	ofstream o("green.txt");
	
	if(i && o){
		while(getline(i,l)){
			o<<l<<"\n";
		}
		cout<<"Copy finished "<<endl;
		
	}
	else{
		cout<<("Cannot read file");
	}
	
	i.close();
	o.close();


	return 0;
}

