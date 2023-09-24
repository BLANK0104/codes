#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,y;
    cout<<"enter number: ";
    cin>>x;
    cout<<"enter power: ";
    cin>>y;
    double result = pow(x, y);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
