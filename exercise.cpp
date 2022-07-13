#include <iostream>
#include <cmath>

using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?  multiple
    Q2. Which mode of Inheritance are you using?    public
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simplecal
{
    int a, b;

public:
    void simpleinput(void)
    {
        cout << "Enter the two numbers : " << endl;
        cin >> a;
        cin >> b;
    }
    void displaysimple(void)
    {
        cout << "The Addition of the entered numbers is " << a + b << endl;
        cout << "The Subtraction of the entered numbers is " << a - b << endl;
        cout << "The Multiplication of the entered numbers is " << a * b << endl;
        cout << "The Divisionof the entered numbers is " << a / b << endl;
    }
};
class scientificcal
{
    int a1, b1;

public:
    void scientificinput(void)
    {
        cout << "Enter the two numbers : " << endl;
        cin >> a1;
        cin >> b1;
    }
    void displayscientific(void)
    {
        cout << "The sin operation of the entered numbers is " << sin(a1) << "," << sin(b1) << endl;
        cout << "The cos operation of the entered numbers is " << cos(a1) << "," << cos(b1) << endl;
        cout << "The tan operation of the entered numbers is " << tan(a1) << "," << tan(b1) << endl;
        cout << "The logarithmic value of the entered numbers is " << log(a1) << "," << log(b1) << endl;
    }
};
class Hybridcal : public simplecal, public scientificcal
{
};

int main()
{
    // simplecal cal1;
    // cal1.simpleinput();
    // cal1.displaysimple();
    // scientificcal cal2;
    // cal2.scientifiinput();
    // cal2.displayscientific();
    Hybridcal Hy;
    Hy.simpleinput();
    Hy.displaysimple();
    Hy.scientificinput();
    Hy.displayscientific();
    return 0;
}