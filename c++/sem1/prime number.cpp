#include <iostream>
using namespace std;
int main()
{
   int i=2,flag=0;
   int a;
   cout<<"enter number to be checked: ";
   cin>>a;

   for(i;i<a;i++)
   {
       if(a%i==0)
       {
       flag=1;}

   }
   cout<<flag<<endl;
   if(flag==0)
   {
       cout<<"prime";
       }
       else{cout<<"not prime"<<endl;
       }
}
