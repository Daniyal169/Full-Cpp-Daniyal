#include <iostream>

using namespace std;

class student
{
protected:
    int rollNum;

public:
    void setRollNum(int rn)
    {
        rollNum = rn;
    }
    void printStudent()
    {
        cout << "Youe roll num is :" << rollNum << endl;
    }
};

class Fsc : virtual public student
{
protected:
    float FSC;

public:
    void setFsc(float f)
    {
        FSC = f;
    }

    void getFsc()
    {
        cout << "Marks in Biology is :" << FSC << endl;
    }
};

class BsCs : virtual public student
{
protected:
    float CS;

public:
    void setBscs(float c)
    {
        CS = c;
    }

    void getBscs()
    {
        cout << "Marks in Programming is :" << CS << endl;
    }
};

class Result : public Fsc, public BsCs
{
private:
    float res;

public:
    void getResult()
    {
        res = FSC + CS;
        printStudent();
        getFsc();
        getBscs();
        cout << "Total marks is :" << res << endl;
    }
};

int main()
{
    Result resOne;
    resOne.setRollNum(179);
    resOne.setFsc(169);
    resOne.setBscs(2026);
    resOne.getResult();
}