#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    a=x;
    b=y;
    c=z;
    x=c;
    y=a;
    z=b;
    cout<<"x is now "<<x<<endl;
    cout<<"y is now "<<y<<endl;
    cout<<"z is now "<<z<<endl;
    return 0;
}
