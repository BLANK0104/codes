#include<iostream>
using namespace std;
int main()
{
    int a,p,r,t,i,x;
    cout<<"enter principal balance: ";
    cin>>p;
    cout<<"enter rate of interest: ";
    cin>>r;
    cout<<"enter time: ";
    cin>>t;
    a=1+r;
    for(i=1;i<=t;i++)
    {
        a=a*i;
    }

    x=p*a;
    cout<<"compound interst is: "<<x;
}
