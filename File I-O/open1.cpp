#include<iostream>
#include <fstream>


using namespace std;

int main(){
    // declaring object:
    ofstream out;

    // connect the objecrt "out" to the text file using open()::

    out.open("vm.txt");

    //writing in the file:

    out<<"My name is BARRY ALLEN \n";
    out<<"And I am the FLASH \n";

    //closing the file is  a good practice:
    out.close();
    

    return 0;
}