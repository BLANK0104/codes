#include <bits/stdc++.h>
using namespace std;
float cmp(char *str1, char *str2)
{
	while(*str1==*str2)
	{
		if (*str1=='\0'&&*str2=='\0')
			{return true;}
		str1++;
		str2++;
	}
	return false;
}

int main()
{
	char str1[100];
	char str2[100];

	cout<<"enter string 1: ";
	cin>>str1;
	cout<<"enter string 2:";
	cin>>str2;

	if (cmp(str1, str2) == 1)
		cout<<"string 1 as "<<str1<<" and "<<"string 2 as "<<str2<<" are Equal";
	else
		cout<<"string 1 as "<<str1<<" and "<<"string 2 as "<<str2<<" are not Equal";
}
