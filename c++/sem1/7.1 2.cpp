//utsav chandra
#include <iostream>
using namespace std;
int main()
{
    int a[100][100];//array
    int i,j;//loop
    int s,m,n,sum=0;//others

    cout<<"enter number of columns: ";
    cin>>m;
    cout<<"enter number of rows: ";
    cin>>n;
    cout<<"enter elements: ";

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"1 for sum of each row"<<endl;
    cout<<"2 for sum of diagonal elements\n";
    cout<<"3 for finding transpose of matrix\n";
    cout<<"enter your choice: "<<endl;
    cin>>s;
    cout<<endl;

    switch(s)
    {
        case(1):
        {
            for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                       {
                           sum+=a[i][j];
                       }
                       cout<<sum<<endl;
                       sum=0;
                }
                break;
        }
        case(2):
            {
                for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            if(i==j)
                            {
                                sum+=a[i][j];
                            }
                        }
                   }
                   cout<<sum<<endl;
                   break;
            }
        case(3):
            {
                for(j=0;j<n;j++)
                    {
                        for(i=0;i<m;i++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                break;
            }
        default:
            {
                cout<<"please enter number between '1' and '3'";
                break;
            }
    }
}
