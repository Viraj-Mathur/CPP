#include <iostream>
#include <string>
using namespace std;
void strhashing()
{
string h1 = "Viraj";
int h2 = 23;
int h3 = -23;
float h4 = 10.56;

cout<<"The string given to get the hash value is "<< h1 <<"\n"<<endl;
hash<string> hash_obj1;
cout << "The hash value of the given integer is : " << hash_obj1(h1)<< endl;
cout <<"The integer given to get the hash value is "<< h2 <<"\n"<<endl;
hash<int> hash_obj2;
cout << "The hash value of the given integer is : " << hash_obj2(h2)<< endl;
cout <<"The integer given to get the hash value is "<< h3 <<"\n"<<endl;
hash<int> hash_obj3;
cout << "The hash value of the given integer is : " << hash_obj3(h3)<< endl;
cout <<"The float value given to get the hash value is "<< h4 <<"\n"<<endl;
hash<float> hash_obj4;
cout << "The hash value of the given float is : " << hash_obj4(h4)<< endl;
}

int main()
{
cout<<"Program to demonstrate the string,integer hash values that are returned using hash class and its objects."<<"\n"<<endl;
strhashing();
}