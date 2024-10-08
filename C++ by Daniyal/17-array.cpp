// Find max num in array

#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cout << "Enter size of array :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The maximun num in this array is :" << max;
}