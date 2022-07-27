#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<< "How are you?" << endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<< "kaise ho?" << endl;
        }
};

class Derived : public Base1,public Base2{
    int a;
    public:
    
        void greet() // if this function is commented then the program will show a error as ambiguity because the compiler will get confused that which do i need to 
            //consider for execution because there is a ambiguity
        {
            //Base2 :: great();
            Base1:: greet();
        }
};



int main() {
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    return 0;


    
}
