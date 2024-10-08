#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number" << endl;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        cout << "Number is prime" << endl;
    }

    else
    {
        cout << "Num is not prime" << endl;
    }
}