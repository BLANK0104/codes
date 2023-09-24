#include <iostream>
using namespace std;
int main()
{
int num,rev=0,rem;
cout<<"Please Enter Your number : ";
cin>>num;
  while(num!=0)
  {
     rem=num%10;
     rev=rev*10+rem;
     num/=10;
  }
 cout<<"Reversed Number: "<< rev <<endl;
return 0;
}
