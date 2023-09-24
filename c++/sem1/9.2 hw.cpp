#include <iostream>
using namespace std;

int main()
{
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << "," << &cho << endl;
    return 0;
}
