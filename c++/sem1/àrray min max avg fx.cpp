#include<iostream>
using namespace std;

int maxm(int b[],int m)
{
    int maxx=1;
    for(int i=0;i<m;i++)
    {
        if(maxx<b[i])
        {
            maxx=b[i];
        }
    }
    cout<<"maximum is "<<maxx;
    cout<<endl;

    return 0;
}

int minm(int b[],int m)
{
    int minx=999;
    for(int i=0;i<m;i++)
    {
        if(minx>b[i])
        {
            minx=b[i];
        }
    }
    cout<<"minimum is "<<minx;
    cout<<endl;

    return 0;
}

int avg(int b[],int m)
{
    int sumx=0,avgx;
    for(int i=0;i<m;i++)
    {
        sumx+=b[i];
    }
    avgx=sumx/m;
    cout<<"average is "<<avgx;
    cout<<endl;

    return 0;
}


int main()
{
    int a[999];
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxm(a,n);
    minm(a,n);
    avg(a,n);
}
