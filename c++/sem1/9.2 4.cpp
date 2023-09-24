#include <iostream>
using namespace std;
int main()
{
   int var;
   int *ptr;
   int **pptr;

   cout<<"ENTER NUMBER: ";
   cin>>var;
   ptr=&var;
   pptr=&ptr;
   cout<<"Value of var is "<<var<<endl;
   cout<<"Value at *ptr is "<<*ptr<<endl;
   cout<<"Value at **pptr is "<<**pptr<<endl;

   return 0;
}
