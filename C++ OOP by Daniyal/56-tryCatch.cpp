#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0)
        {
            throw runtime_error("Division by zero is not allowed");
        }
        int result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (runtime_error &err)
    {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
