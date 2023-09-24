//Write a program to find similar elements in an array and compute the number of times they occur
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,j,x,f=0;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    //for(i=0;i<n;i++)
    //{
      //  cout<<a[i]<<" ";
    //}
     cout<<"enter element to be searched: ";
     cin>>x;
     for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"element found at index "<<i;
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
       if(a[i]==x)
        {
            f++;
        }
    }
    cout<<"element "<<x<<" is found "<<f<<" times in the entered array";
}
