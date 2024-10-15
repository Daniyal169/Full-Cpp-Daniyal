#include <iostream>
using namespace std;

int main()
{

    char arr[100] = "Daniyal";

    int i = 0;

    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    cout << endl;

    // input and output in chr array
    char arr2[100];

    cin >> arr;

    cout << arr;
}