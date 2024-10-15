// Selection Sort : We replace min num in array with first num of array

#include <iostream>
using namespace std;

int main()
{

    // --NOTE--
    // Variable-length arrays may cause errors in some compilers.
    // If your compiler does not support this, use dynamic memory allocation (e.g., 'new') or a fixed-size array.

    int n;
    cout << "Enter size of array :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int arr[5]=2,1,6,3,4

    // for sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // print sortred array
    cout << "Sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
/*
with example

Initially, arr is [5, 8, 12].
int temp = arr[j]; sets temp to the value at arr[2], which is 12. So, temp becomes 12.
arr[j] = arr[i]; assigns the value at arr[0] (which is 5) to arr[2]. So, arr becomes [5, 8, 5].
Finally, arr[i] = temp; assigns the value stored in temp (which is 12) to arr[0]. So, arr becomes [12, 8, 5].
*/