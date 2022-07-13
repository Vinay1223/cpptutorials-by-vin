#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId; 
    char favChar; 
    float salary; 
}ep;
int main(){
    ep harry;
    struct employee harvard;
    struct employee raju;

    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}