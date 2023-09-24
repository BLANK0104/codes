#include<iostream>
using namespace std;
int main()
{
    int a[100][100],z[100][100];
    int b,i,c,j;
    int sum=0;
    cout<<"enter row number: ";
    cin>>b;
    cout<<"enter column number: ";
    cin>>c;
    cout<<"enter elements "<<endl;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

     for(j=0;j<c;j++)
     {
         for(i=0;i<b;i++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
}
