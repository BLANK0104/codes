#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[100];
    int n,i;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[i]=a[i];
        }
        else{continue;}
        cout<<b[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c[i]=a[i];
        }
        else{continue;}
        cout<<c[i]<<" ";
    }

}
