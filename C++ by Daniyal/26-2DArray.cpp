// INPUT IN 2D ARRAY AND OUTPUT

#include <iostream>
using namespace std;
int main()
{
    // --NOTE--
    // Variable-length arrays may cause errors in some compilers.
    // If your compiler does not support this, use dynamic memory allocation (e.g., 'new') or a fixed-size array.

    int n, m;
    cout << "ENter num of rows and column :";
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Searching index in 2D array
    int x;
    cout << "Enter number you want to search index in row and column :";
    cin >> x;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl; // this will givw index of row and column
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Not Found";
    }
}