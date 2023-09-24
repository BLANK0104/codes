//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"enter your 4 digit number: ";
    cin>>a;
    b=a%10;
    c=a/10;
    d=c%10;
    e=a/100;
    f=e%10;
    g=a/1000;
    h=g%10;
    j=b+d+f+h;
    cout<<"addition of numbers from "<<a<<" is "<<j;
    return 0;
}
