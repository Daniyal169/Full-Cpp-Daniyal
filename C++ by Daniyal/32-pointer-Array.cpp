#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {169, 1041, 136, 935};
    int *m = marks;

    // getting address of array
    cout << "The address of marks[0] is :" << m << endl;
    cout << "The address of marks[1] is :" << m + 1 << endl;
    cout << "The address of marks[2] is :" << m + 2 << endl;
    cout << "The address of marks[3] is :" << m + 3 << endl;

    // for values of array by pointer
    cout << "The value of marks[0] is :" << *m << endl;
    cout << "The value of marks[1] is :" << *(m + 1) << endl;
    cout << "The value of marks[2] is :" << *(m + 2) << endl;
    cout << "The value of marks[3] is :" << *(m + 3) << endl;

    // getting by loop
    for (int i = 0; i < 4; i++)
    {
        cout << *m << endl;
        m++;
    }
}