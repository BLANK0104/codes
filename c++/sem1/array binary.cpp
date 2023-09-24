//utsav chandra
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;

	int a[32];
	int i=0;
	while(n>0)
        {
            a[i]=n%2;
		    n=n/2;
		    i++;
	    }
	for (int j=i-1;j>=0;j--)
		cout<<a[j];
}
