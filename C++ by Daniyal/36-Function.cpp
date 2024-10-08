// Function and prototypes

#include <iostream>
using namespace std;

// Function prototype.
//  Syntax :  dataType functionName (arguments);
int sum(int a, int b);
void greet();

int main()
{

    int num1, num2;

    cout << "Enter number 1 :";
    cin >> num1;
    cout << "Enter number 2 :";
    cin >> num2;

    // num1 and num2 are actual aparameter
    cout << "Sum of two entered numbers is :" << sum(num1, num2) << endl; // calling the function.

    greet();
    return 0;
}

int sum(int x, int y)
{ // defining the function.

    // a and b are Formal parameter and they take values from Actual parameter
    int c = x + y;
    return c;
}

// void function which does not return anything
void greet()
{
    cout << "Hello Good Morning";
}
