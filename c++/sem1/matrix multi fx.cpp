#include<iostream>
using namespace std;

int multi(int c[][100],int m,int n,int d[][100],int p,int q)
{
    cout<<"a";
    return 0;
}


int main()
{
    int a[100][100],b[100][100];
    int m,n,p,q;
    int i,j;
    cout<<"enter number of rows: ";
    cin>>m;
    cout<<"enter number of columns: ";
    cin>>n;
    cout<<"enter "<<m*n<<" elements: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"enter number of rows: ";
    cin>>p;
    cout<<"enter number of columns: ";
    cin>>q;
    cout<<"enter "<<p*q<<" elements: ";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>a[p][q];
        }
    }
    multi(a,m,n,b,p,q);
}
