#include <iostream>
using namespace std;
int main()
 {
    int b, x, i;
    long long r = 1;
    cout << "-----Enter the input of base number-----\n";
    cin >> b;

    cout << "\n-----Enter the input of exponent number-----\n";
    cin >> x;

    for (i = 1; i <=x; i++) {
        r *= b;
    }

    cout << "\nThe calculation of the power of N number is " << b << "^" << x << " = " << r << "\n";
    return 0;
}
