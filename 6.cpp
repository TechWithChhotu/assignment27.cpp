// Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include <iostream>
#include <string.h>
using namespace std;
class CString
{
private:
    char str[40];

public:
    CString()
    {
        cin.getline(str, 20);
    }
    void InputData()
    {
        cin.getline(str, 20);
    }
    void ShowString()
    {
        cout << str << endl;
    }
    void operator+(CString t)
    {
        strcat(str, t.str);
    }
    int operator==(CString t)
    {
        if (strcmp(str, t.str) == 0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    cout << endl
         << "Enter the first string: ";
    CString s1;
    cout << "Enter the second string: ";
    CString s2;

    cout << "1st string: ";
    s1.ShowString();
    cout << "2nd string: ";
    s2.ShowString();

    s1 + s2;
    cout << "concatenated string: ";
    s1.ShowString();
    if (s1 == s2)
        cout << "string are equal";
    else
        cout << "string are not equal";
    cout << endl
         << "Enter the first string: ";
    s1.InputData();
    cout << "Enter the second string: ";
    s2.InputData();

    cout << "1st string: ";
    s1.ShowString();
    cout << "2nd string: ";
    s2.ShowString();

    s2 + s1;
    cout << "concatenated string: ";
    s2.ShowString();
    if (s1 == s2)
        cout << "\nstring are equal";
    else
        cout << "\nstring are not equal";
    return 0;
}