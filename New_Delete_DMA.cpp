#include<iostream>
using namespace std;
int main() {
    
    int *arr = new int[3]; ///here we used 'new' keyword for dynamically allocating memory
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;  //space used by an array gets free when we use delete keyword 
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}