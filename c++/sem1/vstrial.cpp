//string palindrome in c++ using array without flag
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i, j, len;
    cout << "Enter a string: ";
    cin >> str;
    len = str.length();
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    
    {
        if (str[i] != str[j])
        {
            cout << "Not a palindrome";
            break;
        }
    }
    if (i == len / 2)
        cout << "Palindrome";
        system("pause");

    return 0;
}