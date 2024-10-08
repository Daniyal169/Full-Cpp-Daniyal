#include <iostream>
using namespace std;

int main()
{

    try
    {
        // throw 20;
        // throw 20.5;
        // throw "Error occurred";
        throw runtime_error("This is run time error");
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

    // to catch all types of error in one
    catch (...)
    {
        cout << "Any exception error occurred" << endl;
    }

    return 0;
}
