// Binary Search :In this we dont start finding element from start we start from mid bcz it decreases time complexity

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];

    cout << "Enter numbers in array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter number you want to search index :";
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;
}