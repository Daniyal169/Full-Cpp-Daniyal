// Palindrome Sequence

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

    char arr[n + 1];
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}