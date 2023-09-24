//1
//1  2
//1  2  3
//3  2  1
//2  1
//1
#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
    cout << "rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<j;
	cout<<endl;
   }

 for(i<=rows;i=1;i--)
   {
	for(j<=i;j=1;j--)
	   cout<<j;
	cout<<endl;
   }
}
