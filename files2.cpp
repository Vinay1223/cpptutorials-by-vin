#include<iostream>
using namespace std;
int main() {
    
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    out<<" MY name is "+ name;
    out.close();

    ifstream in("vinvam.txt");
    string content;
    in>>content;
    cout << "The content of this file is :  "<< content;
    return 0;

}