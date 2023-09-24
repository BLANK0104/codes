//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,x,j,fact;
    float sum=1.0;
    cout<<"Enter how many number:";
    cin>>n;
    cout<<"Enter the value of x:";
    cin>>x;
    while(i<=n)
    {
        fact=1;
        for(j=1;j<=i;j++){
        fact*=j;
        sum+=pow(x,i)/fact;
        }
        i++;
    }
    cout<<"The sum of the series = "<<sum;
}
