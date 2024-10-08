// Recursions & Recursive Functions in C++

// RECURSION is a programming technique in which a function calls itself to solve a problem
// Recursive functions consist of two main parts:
// 1
// Base case(s): These are the terminating conditions that stop the recursion. Without a base case, the recursion would continue indefinitely, leading to a stack overflow.
// 2
// Recursive case: In this part, the function calls itself with modified arguments to move closer to the base case. Each recursive call should make progress toward the base case.

#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base condition
    if (n <= 1)
    {
        return 1;
    }

    // Recursive condition
    return n * factorial(n - 1);
}

// code explanation is in rehister

int main()
{
    int a;
    cout << "Enter a anumber :";
    cin >> a;

    cout << "Factorial of " << a << " is " << factorial(a);
}
