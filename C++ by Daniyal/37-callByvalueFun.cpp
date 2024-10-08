// Call by Value  in C++

#include <iostream>
using namespace std;

/*
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
    This will not work
    This version takes two integer parameters by value, meaning it works with copies of the original integers.
    Since it operates on copies, it does not affect the original integers passed into the function.
    Any changes made inside the function do not affect the original values outside the function.
*/

// call by value: In Call by value, a copy of the actual argument (the value) is passed to the function parameter.
/*
    This version takes two integer pointers as parameters. Pointers store memory addresses
    When you pass integers to this version of the function, you're actually passing the memory addresses (pointers) of the original values.
    The function uses these pointers to access and modify the actual values at those memory locations. So, any changes made inside the function will affect the original values outside the function.
*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int x = 10, y = 20;
    cout << "The value of x is :" << x << " This value of y is :" << y << endl;

    swap(x, y);
    cout << "The value of x is :" << x << " This value of y is :" << y << endl;

    return 0;
}