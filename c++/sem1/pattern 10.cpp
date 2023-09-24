//1
//10
//101
//1010
#include <iostream>
using namespace std;

int main()
{
   int i,j,rows,k;
    cout << "rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   if(j%2==0)
       {
           cout<<"0"<<" ";
       }
       else{cout<<"1"<<" ";}
	cout<<endl;
   }
}
