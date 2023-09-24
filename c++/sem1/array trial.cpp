#include <iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter number of elements: ";
   cin>>a;
   int arr[a];
   cout<<"enter "<<a<<" elements: "<<endl;
   int i;
   for(i=0;i<a;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<a;i++)
   {
       cout<<arr[i]<<" ";
   }
}
