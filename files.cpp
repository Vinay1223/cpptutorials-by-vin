#include<iostream>
#include<fstream>

using namespace std;
/*
These are some useful classes for working with files in C++
1. fstreambase
2. ifstream -> derived from fstreambase
3. ofstream ->derived from fstreambase
*/

/*
In order work with files in C++, you will have to oppen it.Primarily, htere are 2 ways
to open a file :
1. Using the constructor
2. Uing the member function open() of the class
*/
int main() {
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it 
    ofstream out("vinvam.txt");
    out<<st;
    
    // Opening files using constructor and reading it 
    ifstream in("sample.txt");
   // in>>st2;
    getline(in,st2);
    getline(in,st2);
    getline(in,st2);


    cout<<st2;
    return 0;
}