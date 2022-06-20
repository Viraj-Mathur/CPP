
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
    //for reading a file. 
    string abc;

    ifstream in("greenL.txt");
    //THE WRITTEN PART OF THE FILE(no spaces and new line) WILL GO IN ABC NOW
    //in>>abc; 
    //TO READ ALL LINES
    getline(in,abc);
    cout<<abc;

    
    return 0;
}