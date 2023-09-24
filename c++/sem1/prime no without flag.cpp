//utsav chandra
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
cout<<"prime numbers Below 100"<< endl;
for(int m=2;m<100;m++)
for(int n=2;n*n<=m;n++)
{
if(m%n==0)
break;
else if(n+1>sqrt(m))
    {cout<<m<<",";
}
}
return 0;
}
