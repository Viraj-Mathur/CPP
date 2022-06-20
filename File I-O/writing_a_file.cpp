
/*
 USEFUL CLASSES FOR WORKING WITH FILES IN C++ ARE: 
1. FSTREAM
2. IFSTREAM -->DERIVED FROM FSTREAMBASE
3. OFSTREAM -->DERIVED FROM FSTREAMBASE

IN ORDER TO OPEN A FILE THERE ARE 2 WAYS:

1. USING THE CONSTRUCTOR
3. USING THE MEMBER FUNCTION() OF THE CLASS 
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //for writing a file. 

    string st= "MY NAME IS BARRY ALLEN AND I AM THE FASTEST MAN ALIVE..";

    ofstream out("vm.txt");

    out<<st;
    return 0;
}