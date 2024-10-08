/*
Initialization section

constructor (argument-list):initialization-list
*/

#include <iostream>
using namespace std;

class Math
{
    int num1, num2;

public:
    // Math(int n1, int n2) : num1(n1), num2(n2)
    // Math(int n1, int n2) : num1(n1), num2(n2+n1)
    // Math(int n1, int n2) : num2(n2), num1(n1 + num2) // this will not give right val bcz num1 is declared first above so it showuld intialized first
    Math(int n1, int n2) : num1(n1), num2(n2 + num1)
    {
        cout << "Constructor called" << endl;
        cout << "The value of num1 is :" << num1 << endl;
        cout << "The value of num2 is :" << num2 << endl;
    }
};

int main()
{
    Math mOne(2, 4);
}