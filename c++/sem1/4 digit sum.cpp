//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"enter your 4 digit number: ";
    cin>>a;
    b=a%10;
    cout<<b;
    c=a/10;
    d=c%10;
    cout<<d;
    e=a/100;
    f=e%10;
    cout<<f;
    g=a/1000;
    h=g%10;
    cout<<h<<endl;
    i=b+d+f+h;
    cout<<i<<endl;
    j=(b*1000)+(d*100)+(f*10)+h;
    cout<<"reverse is: "<<j;
    return 0;
}
