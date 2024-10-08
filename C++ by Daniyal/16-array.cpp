// Array intro vid

#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << arr[2] << endl;

    // Array size from user
    int n;
    cout << "Enter size of array :";
    cin >> n;

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    cout << "Output ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}