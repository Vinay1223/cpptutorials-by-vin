#include<iostream>
using namespace std;
 /*
 here the theme of this code is to let us know that by using the virtual 
 functions means runtime polymorphism we making a baseclass pointer which belongs to the 
 baseclass and it is pointing to the derived class.It has a capability to access the members in the baseclass but now we made 
 it to access the derived class members by using the virtual keyword 
 */
class BaseClass{
    public:
     int var_base=1;
  ///   virtual void display(){
   void display(){
        cout<< "1 Displaying Base class variable var_base "<<var_base<<endl;
     }
};
class DerivedClass : public BaseClass{
    public:
        int var_derived = 2;
        void display(){
            cout <<"2 Displaying Base class variable var_base "<<var_base<<endl;
            cout <<"2 Displaying Base class variable var_derived "<<var_derived<<endl;

        }
};

int main() {
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();    
    (*base_class_pointer).display();    
    return 0;
}