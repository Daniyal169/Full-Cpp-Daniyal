// 2D character Arrays

#include <iostream>
using namespace std;

int main()
{
    char arr[4][10] = {0};

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter string for row " << i + 1 << ": ";
        cin.getline(arr[i], 10);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}