// Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include <iostream>
#include <string.h>
using namespace std;
class Mystring
{
private:
    char str[50];

public:
    void set_str(char xyz[])
    {
        strcpy(str, xyz);
    }
    void togel_case()
    {
        for (int i = 0; i < str[i] != 0; i++)
        {
            if (str[i] <= 90 && str[i] >= 65)
                str[i] = str[i] + 32;
            else if (str[i] <= 122 && str[i] >= 97)
                str[i] = str[i] - 32;
        }
    }
    void Show_str()
    {
        cout << "\nstring is: " << str;
    }
};
int main()
{
    Mystring s1;
    char str[50];
    cout << "Enter a string: ";
    cin.getline(str, 50);
    s1.set_str(str);
    s1.Show_str();
    s1.togel_case();
    s1.Show_str();
    return 0;
}