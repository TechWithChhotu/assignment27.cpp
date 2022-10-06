// Write a C++ program to operator+ two complex numbers using operator overloaded by a
// friend function.
#include <iostream>
using namespace std;
class Complex
{
private:
    int r, i;

public:
    Complex(int x, int y)
    {
        r = x;
        i = y;
    }
    Complex() {}
    void ShowData()
    {
        cout << " " << r << "+" << i << "i" << endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.r = y.r + x.r;
    temp.i = y.i + x.i;
    return temp;
}
int main()
{
    Complex c1(6, 3), c2(3, 2);
    c1.ShowData();
    c2.ShowData();

    cout << "+----+" << endl;
    Complex c3 = c1 + c2; // Complex c3 = operator+(c1, c2);
    c3.ShowData();
    return 0;
}