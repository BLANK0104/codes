//       $
//      $ $
//     $ $ $
//    $ $ $ $
#include <iostream>
using namespace std;

int main()
{
   int i,j,k,space,rows;
    cout<<"rows: ";
    cin>>rows;
   space=rows+3;
   for(i=1;i<=rows;i++)
   {
         for(k=space;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<"$"<<" ";
	cout<<endl;
    space--;
   }
}
