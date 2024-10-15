// Bubble Sort : Repetedly swap two adjacent elemnet if they are in wrong order

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

    int counter = 1; // for diff iterations
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}