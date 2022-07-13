#include<iostream>
using namespace std;
int main() {
    // pointers and arrays
    int marks[]={99,100,12,13};
    int*p =marks;
    cout<<*(p++)<<endl;
        cout<<*(p)<<endl;
            cout<<*(++p)<<endl;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[0] is "<<*(p+1)<<endl;
    cout<<"the value of marks[0] is "<<*(p+2)<<endl;
     return 0;
}