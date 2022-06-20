#include<iostream>
using namespace std;

class abc{
	private:
		int num;
		public:
			void getNum(){
				
				cin>>num;
			}
			int operator ==(abc x){
				if(num==x.num)
				return 1;
				else
				return 
				0;
			}
};

int main(){
	abc n1,n2;
	cout<<"Enter n1: ";
	n1.getNum();
	cout<<"Enter n2: ";
	n2.getNum();
	if(n1==(n2)){
		cout<<"n1 is equal to n2" ;
	}
	else{
		cout<<"n1 is not equal to n2" ;
	}
	
    

	return 0;
}

