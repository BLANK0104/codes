#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i,n;
    cout<<"enter number of elements for array 1: ";
    cin>>n;
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int b[100];
    int k;
    cout<<"enter number of elements for array 2: ";
    cin>>k;
    cout<<"enter elements: ";
    for(i=0;i<k;i++)
    {
        cin>>b[i];
    }

    int c[100];
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<k;i++)
    {
        c[n+i]=b[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<k+n;i++)
    {
        cout<<c[i]<<" ";
    }
}
