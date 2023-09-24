//   *
//  **
// ***
//****
#include <iostream>
using namespace std;

int main()
{
   int a=1,b=1;
   int i,j,rows,k;
    cout << "rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=rows-i;j++)
	   {cout<<" ";
	   }
    for(k=1;k<=i;k++)
    {
        cout<<a;
        a++2;
    }
    cout<<endl;

   }
   return 0;
}
