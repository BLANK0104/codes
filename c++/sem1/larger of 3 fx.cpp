#include<iostream>
using namespace std;

float large(float a, float b, float c)
{
    float x,y,z;
    float d;
    if(x<y&&x<z )
    {
        d=a;
    }
    if(y<x&&y<z)
    {
        d=b;
    }
    if(z<y&&z<x)
    {
        d=c;
    }
    return d;
}
int main()
{
    float x,y,z,d;
    cout<<"enter 3 numbers: ";
    cin>>x>>y>>z;
    d=large(x,y,z);
    cout<<"largest number is "<<d;
}
