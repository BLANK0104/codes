#include <iostream>
using namespace std;

int avg(int x, int y, int z)
{
int a;
a=(x+y+z)/3;
return a;
}
int main() {
    int p,q,r;
    cout<<"enter value of 1st number: ";
    cin>>p;
    cout<<"enter value of 2nd number: ";
    cin>>q;
    cout<<"enter value of 3rd number: ";
    cin>>r;
    int a = avg(p,q,r);
    cout << "average is " << a;
    return 0;
}
