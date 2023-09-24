//utsav chandra
#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,x;

    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        }

    cout<<"Enter a number to search: ";
    cin>>x;
    for(i=0;i<n;i++)
        {
        if(a[i]==x)
        {
            cout<<x<<" is at '"<<i+1<<"' position";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Element is not present is the given array";
    }
}
