// Throwing error thorugh function

#include <iostream>
using namespace std;

void error()
{
    throw 20;
}

int main()
{

    try
    {
        error();
    }
    catch (int err)
    {
        cout << "Error :" << err << endl;
    }
    catch (const char *err)
    {
        cout << err << endl;
    }
    catch (runtime_error &err)
    {
        cout << "Error: " << err.what() << endl;
    }
    catch (...)
    {
        cout << "Any exception error occurred" << endl;
    }

    return 0;
}