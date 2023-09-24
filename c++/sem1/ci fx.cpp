#include <iostream>
#include<math.h>
using namespace std;

float si(float x, float y, float z)
{
    float a,b;
    a=x*(1+z/100);
    b=pow(a,y);
    return b;
}
int main()
{
    float p,r,t;
    float b;
    cout<<"enter value of principal amount: ";
    cin>>p;
    cout<<"enter value of time ";
    cin>>t;
    cout<<"enter value of rate of interest ";
    cin>>r;
    int a = si(p,t,r);
    cout << "simple interest is " << b;
    return 0;
}
