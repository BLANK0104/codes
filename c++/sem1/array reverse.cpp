#include<iostream>
using namespace std;
int main()
{
    int a[999];
    int b[999];
    int i,j,k;
    int x,y,z;

    cout<<"enter number of elements: ";
    cin>>x;
    cout<<"enter elements: ";
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"array 1 is: ";
    for(i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"\n";
    for(i=x-1;i>=0;i--)
    {
        b[x-1-i]=a[i];
    }
    cout<<"reversed array 1 is: ";
    for(i=0;i<x;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}
