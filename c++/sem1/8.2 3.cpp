#include<iostream>
using namespace std;

int minm(int b[],int m)
{
    int minx=999;
    for(int i=0;i<m;i++)
    {
        if(minx>b[i])
        {
            minx=b[i];
        }
    }
    cout<<"minimum is "<<minx;
    cout<<endl;

    return 0;
}

int main()
{
    int a[999];
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minm(a,n);
}
