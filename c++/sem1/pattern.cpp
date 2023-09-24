//     1
//    121
//    1331
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s;
    int a=1;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(s=1;s<n-i;s++)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            if(j==0||i==0)
                {a=1;}
            else
                {a=a*(i-j+1)/j;}

            cout<<a<<""<<" ";
        }
        cout<<"1"<<endl;
    }
}

