// Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];

public:
    Matrix()
    {
        cout << "Enter matrix elements (3*3): ";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void InputData()
    {
        cout << "Enter matrix elements (3*3): ";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void Show_Data()
    {
        cout << "\n-:matrix:-\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    void operator-()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }
};
int main()
{
    Matrix m1;
    m1.Show_Data();

    -m1;
    m1.Show_Data();

    m1.InputData();
    -m1;
    m1.Show_Data();

    return 0;
}