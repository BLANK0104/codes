#include<iostream>
using namespace std;

void swap(int a, int b, int c, int d)
{
 a = a + b;
 b = a - b;
 a = a - b;

 b = b + c;
 c = b - c;
 b = b - c;

 c = c + d;
 d = c - d;
 c = c - d;

 cout << "values after swapping are : " << endl;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;
 cout << "d = " << d << endl;
}
int main()
{ int a,b,c,d;

 cout << "Values before swapping are :" << endl;
 cout << "a = ";
 cin>>a;
 cout << "b = ";
 cin>>b;
 cout << "c = ";
 cin>>c;
 cout << "d = ";
 cin>>d;

 swap(a, b, c, d);

 return 0;
}
