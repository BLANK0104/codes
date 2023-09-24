#include<iostream>
using namespace std;

int large(int *y,int m)
{
    int i,x,a[100],z=0;
    for (i=0;i<m;i++)
    {
        x=*y;
        *y++;
        if(z<x)
        {
            z=x;
        }
    }
    cout<<endl;
    cout<<"largest number out of the given array is "<<z;
    return 0;
}

main()
{
    int a[100];
    int n,i;
    cout<<"enter number of elements for array: ";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int*x=&a[0];
    large(x,n);
}
