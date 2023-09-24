#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,sum=0;
    float avg;
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
    cout<<endl;
    for(i=0;i<n;i++)
    {
        a[i];
        sum+=a[i];
    }
    cout<<"sum of array is: "<<sum<<endl;
    avg=sum/n;
    cout<<"average of array is "<<avg<<endl;

    for(i=0;i<n;i++)
    {
        cout<<a[i]*5<<" , ";
    }
}
