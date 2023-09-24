#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i;
    cout<<"how many elements to enter ? ";
    cin>>n;
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }
}
