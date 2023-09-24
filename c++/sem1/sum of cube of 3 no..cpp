//utsav chandra
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"enter your 3 digit number: ";
    cin>>a;
    b=a%10;
    c=a/10;
    d=c%10;
    e=a/100;
    f=e%10;
    g=pow(b,3)+pow(d,3)+pow(f,3);
    cout<<"sum of cube of "<<a<<" is "<<g;
    return 0;
}
