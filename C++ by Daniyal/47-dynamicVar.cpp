// Creating variables dynamiclly

#include <iostream>
using namespace std;
int main()
{
    // cretaing normal variables and setting values to them
    int *var1 = new int(3);
    float *var2 = new float(3.33);
    cout << "The vaue of var1 is :" << *var1 << endl;
    cout << "The vaue of var2 is :" << *var2 << endl;

    // creating array
    int *arr = new int[3]; // this is size of array
    arr[0] = 10;
    arr[1] = 20;
    *(arr + 2) = 30;

    cout << "The value of arr[0] is :" << arr[0] << endl;
    cout << "The value of arr[1] is :" << arr[1] << endl;
    cout << "The value of arr[2] is :" << arr[2] << endl;

    // delete operator
    delete var1;
    delete var2;
    delete[] arr;
}
