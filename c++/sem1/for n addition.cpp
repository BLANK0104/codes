#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter desired number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       sum+=i;
       cout<<"inside loop, sum is "<<sum<<endl;
    }
    cout<<"outside loop, sum is "<<sum;
    return 0;
}
