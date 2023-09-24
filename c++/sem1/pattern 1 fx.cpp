//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

#include<iostream>
using namespace std;

int pat(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j%2==0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}


int main()
{
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    pat(n);
}
