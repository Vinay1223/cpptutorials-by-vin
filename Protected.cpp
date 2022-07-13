// This program is only is for the sake of syntax 
#include<iostream>
using namespace std;

class Base {
     protected :
         int a;
    private :
        int b;
};

class Derived : protected Base {

};

int main() {
    
    Base b;
    Derived d;
    return 0;
}