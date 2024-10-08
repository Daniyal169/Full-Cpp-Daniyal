// Try, Catch , Throw

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter num1 and 2 :";
    cin >> num1 >> num2;
    int result;
    try
    {
        if (num2 == 0)
        {
            throw "Num2 cant be 0";
        }
        result = num1 / num2;
        cout << result << endl;
    }
    catch (char *err)
    {
        cout << "Error occurred :" << err << endl;
    }
}