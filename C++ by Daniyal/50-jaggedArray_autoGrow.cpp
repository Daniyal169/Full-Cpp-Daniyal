#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "ENter num of rows :";
    cin >> row;

    int **arr = new int *[row];
    int size[] = {4, 1, 7};

    for (int i = 0; i < row; i++)
    {
        int col = size[i];

        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        int col = size[i];

        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 56;
        }
    }

    // NOW REGROWING ARRAY
    int newSize[] = {5, 2, 8};

    for (int i = 0; i < row; i++)
    {
        int col = size[i];
        int newCol = newSize[i];

        int *tempArr = new int[col];

        for (int j = 0; j < col; j++)
        {
            tempArr[j] = arr[i][j];
        }

        delete[] arr[i];

        arr[i] = new int[newCol];

        for (int j = 0; j < newCol; j++)
        {
            arr[i][j] = tempArr[j];
        }

        for (int j = col; j < newCol; j++)
        {
            arr[i][j] = 56;
        }

        size[i] = newCol;

        delete[] tempArr;
    }

    cout << "Entered 2D array is :" << endl;
    for (int i = 0; i < row; i++)
    {
        int col = size[i];

        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}