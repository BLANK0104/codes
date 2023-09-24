#include<iostream>
using namespace std;
int main()
{
    char a[10],i,o;
    int c=0;
    cout<<"enter name";
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c/2;i++)
    {
        o=a[c-1-i];
        a[c-1-i]=a[i];
        a[i]=o;
    }
    cout<<a;
    return 0;
}
