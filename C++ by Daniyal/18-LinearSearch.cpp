// Linear Searching in arrays

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;

    // --NOTE--
    // Variable-length arrays may cause errors in some compilers.
    // If your compiler does not support this, use dynamic memory allocation (e.g., 'new') or a fixed-size array.

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter number you want to search key :";
    cin >> key;

    cout << LinearSearch(arr, n, key) << endl;

    return 0;
}