// . Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;
class INC_DEC
{
private:
    int i;

public:
    INC_DEC(int x)
    {
        i = x;
    }
    INC_DEC operator++()
    {
        i++;
    }
    INC_DEC operator--()
    {
        i--;
    }
    void ShowData()
    {
        cout << i << endl;
    }
};
int main()
{
    INC_DEC i1(4), i2(9);
    cout << "before increment value: ";
    i1.ShowData();
    cout << "before decrement value: ";
    i2.ShowData();

    ++i1;
    --i2;
    cout << "after increment: ";
    i1.ShowData();
    cout << "after decrement: ";
    i2.ShowData();
    ++i1;
    --i2;
    cout << endl
         << "after increment: ";
    i1.ShowData();
    cout << "after decrement: ";
    i2.ShowData();
    ++i1;
    --i2;

    cout << endl
         << "after increment: ";
    i1.ShowData();
    cout << "after decrement: ";
    i2.ShowData();
    return 0;
}