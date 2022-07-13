
#include<iostream>
using namespace std;


class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
   // a.getData(); //rather using this calling we can use the above one 
                   //also since we used the 'this' pointer 
    return 0;
}