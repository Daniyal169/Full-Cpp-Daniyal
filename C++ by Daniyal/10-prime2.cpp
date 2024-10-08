// print all prime num b/t two numbers enter by user

#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    for (int x = a; x <= b; x++)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            cout << i << endl;
        }
    }
    return 0;
}