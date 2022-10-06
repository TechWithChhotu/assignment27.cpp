// Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.
#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    Numbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Numbers() {}
    void SetData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
    void ShowData()
    {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};
int main()
{
    Numbers n1(2, -3, 5);
    n1.ShowData();
    -n1;
    n1.ShowData();
    cout << "\n\n";

    n1.SetData(4, -6, -110);
    n1.ShowData();
    -n1;
    n1.ShowData();
    cout << "\n\n";
    return 0;
}