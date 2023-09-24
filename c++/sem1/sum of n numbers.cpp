#include<iostream>
using namespace std;
int main()
{
    int i,sum=1,n;
    cout<<"enter number of terms: :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum*=i;
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<sum;
}
