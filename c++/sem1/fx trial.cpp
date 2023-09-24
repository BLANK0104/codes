#include<iostream>
using namespace std;
void sum(int a, int b, int c)
{
     a+=c;
     b+=c;
     cout<<"\nInside the function "<<a<<b;
}
int main()
{
     int a, b;
     cout<<"\nEnter two numbers ";
     cin>>a>>b;
     cout<<"\nBefore adding "<<a<<b;
     sum(a,b,10);
     cout<<"\nAfter adding "<<a<<b;
     return 0;
}
