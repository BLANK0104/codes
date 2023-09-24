//  1
//  2  3
//  4  5  6
//  7  8  9 10
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int i,j,rows,c=1;
    cout << "rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<setw(3)<<c++;
	cout<<endl;
   }
}
