//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,a,b,c;
    float y,z;
    cout<<"for square root, enter 1 or ";
    cout<<"for power, enter 2: ";
    cin>>x;

    switch(x){

    case(1):
        cout<<"enter number for calculating root ";
        cin>>y;
        z=pow(y,0.5);
        cout<<"square root of "<<y<<" is "<<z<<endl;
        break;

    case(2):
        cout<<"enter number ";
        cin>>a;
        cout<<"enter power ";
        cin>>b;
        c=pow(a,b);
        cout<<a<<" raised to "<<b<<" is "<<c;
        break;

    default:
        cout<<"please enter 1 or 2";
        break;}
}
