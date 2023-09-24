#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];//matrix
    int m,n,p,q;//rows and columns
    int i,j;//loop
    cout<<"enter number of rows for 1st matrix:";
    cin>>m;
    cout<<"enter number of columns for 1st matrix:";
    cin>>n;
    cout<<"enter "<<m*n<<" elements: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }



    cout<<"enter number of rows for 2nd matrix:";
    cin>>p;
    cout<<"enter number of columns for 2nd matrix:";
    cin>>q;
    cout<<"enter "<<m*n<<" elements: ";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"\n\n";

    cout<<"multiplication of "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<" and "<<endl;
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
    cout<<" is "<<endl;


    if(n==p)
        {for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<a[i][j]*b[i][j]<<" ";
            }
            cout<<endl;
        }}
    else
    {
        cout<<"matrix multiplication is not possible";
    }
}
