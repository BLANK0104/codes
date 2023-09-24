#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"factorial of "<<n<<" is "<<f;
    return 0;
}


int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    fact(n);
}
