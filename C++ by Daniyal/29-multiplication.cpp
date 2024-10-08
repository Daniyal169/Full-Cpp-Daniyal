// MULTIPLICATION OF MATRIX

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3; // first matrix column will be eq to 2nd rows

    int matrix1[n1][n2];
    int matrix2[n2][n3];

    cout << "Enter numbers in first matrix :";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> matrix1[i][j];
        }
        cout << endl;
    }
    cout << "Enter numbers in second matrix :";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> matrix2[i][j];
        }
        cout << endl;
    }

    // Now matrix for storing answer
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    // MAIN LOGIC CODE

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // printing
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
