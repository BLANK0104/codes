//A
//AB
//ABC
//ABCD
#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
    cout << "rows: ";
    cin >> rows;
    cout<<"A"<<endl;
   for(i=1;i<rows;i++)
   {
	for(j=65;j<=65+i;j++)
	   cout<<(char)j;
	cout<<endl;
   }
   cin.get();
}
