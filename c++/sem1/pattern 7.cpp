//A
//BB
//CCC
//DDDD
#include <iostream>
using namespace std;

int main()
{
   int i,j,rows,z=65;
    cout << "rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<(char)z;
	cout<<endl;
	z++;
   }
}
