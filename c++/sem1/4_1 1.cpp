//utsav chandra
#include <iostream>
using namespace std;

int main() {
    int c, s;
    float avg = 0, n;

    cout << "How many numbers ";
    cin >> c;

    cout << "Enter the number ";
    for(s = 0; s < c; s++) {
        cin >> n;
        avg += n;
    }

    avg /= c;
    cout << "Average is  " << avg;
    return 0;
}
