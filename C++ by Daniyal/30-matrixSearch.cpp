// Searching number in matrix

#include <iostream>
using namespace std;

int main()
{
    // --NOTE--
    // Variable-length arrays may cause errors in some compilers.
    // If your compiler does not support this, use dynamic memory allocation (e.g., 'new') or a fixed-size array.

    int n, m;
    cout << "Enter number of rows and columns :";
    cin >> n >> m;

    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << endl;

    // we will start searching from top right corner
    int target;
    cout << "Enter number you want to search :";
    cin >> target;

    bool found = false;

    int r = 0, c = m - 1;

    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }

        if (mat[r][c] > target)
        {
            c--;
        }

        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element does not exist";
    }
}