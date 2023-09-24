#include <iostream>
using namespace std;

float si(float x, float y, float z)
{
    int a;
    a=(x*y*z)/100;
    return a;
}
int main()
{
    float p,r,t;
    cout<<"enter value of principal amount: ";
    cin>>p;
    cout<<"enter value of time ";
    cin>>t;
    cout<<"enter value of rate of interest ";
    cin>>r;
    int a = si(p,t,r);
    cout << "simple interest is " << a;
    return 0;
}
