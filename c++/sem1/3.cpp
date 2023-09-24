#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20],b[20],i;
    int l;
    cout<<"enter a";
    cin>>a;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        b[i]=a[i];
    }
    strrev(b);
    if(strcmp(a,b)==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
