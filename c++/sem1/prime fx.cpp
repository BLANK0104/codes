#include<iostream>
using namespace std;

int prime(int n)
{
    int d=1;
    for(int i=2;i<=n/2;i++)
    {
        d=n%i;
        if(d==0)
        {
            cout<<n<<" is a composite number";
            break;
        }
    }
    if(d!=0)
        cout<<n<<" is a prime number";
    return 0;
}


int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    prime(n);
}
