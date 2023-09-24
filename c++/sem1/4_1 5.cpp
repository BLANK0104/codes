//utsav chandra
#include<iostream>
using namespace std;
int main()
{
   int n, r, sq, sum;
   cout<<"Enter a number: ";
   cin>>n;
   for(sum=0; n>0; n=n/10)
   {
      r = n%10;
      if(r==0)
         sq = 1;
      else
         sq = r*r;
      sum = sum + sq;
   }
   cout<<"Sum of squares of all digits = "<<sum;
   cout<<endl;
   return 0;
}
