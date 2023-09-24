//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    int x;
    cout<<"rows: ";
    cin>>x;
    int i,j,k,m;
    for(i=1;i<=x;i++)
    {
        for(j=x;j>=i;j--)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<<--ch;
        cout<<endl;
        ch='A';
    }
return 0;
}

