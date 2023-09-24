#include<iostream>
using namespace std;
int main()
{
    int a[999],b[999],c[999];
    int n,m;
    int i,j,k;
    cout<<"enter number of elements for array 1: ";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter number of elements for array 2: ";
    cin>>m;
    cout<<"enter "<<m<<" elements: ";
    for(j=0;j<m;j++)
    {
        cin>>a[j];
    }
    i=0;
    j=0;
    for(k=0;k<m+n;k++)
    {
        c[k]=a[i]+b[j];
        cout<<c[k]<<endl;;
        i+=1;
        j+=1;
    }
}
