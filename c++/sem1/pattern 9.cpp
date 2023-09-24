#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k,n,a=1;
    cout<<"rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            cout<<" ";
        for(k=0;k<i;k++)
            cout<<setw(2)<<a++<<" ";
        cout<<endl;
    }
    cout<<endl;
    cin.get();
    return 0;
}
