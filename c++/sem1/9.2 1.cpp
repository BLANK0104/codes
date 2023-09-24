#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int b=2;
    int*x=&a;
    int*y=&b;
    int i,j,k,m;

    cout<<"sum on pointers"<<endl;
    i=*x+*y;
    cout<<x<<"+"<<y<<"="<<i;//*x+*y<<endl;//&a+&b not working, x+y not working, *x+*y not working
    cout<<endl;
    cout<<"substraction on pointers"<<endl;
    j=*x-*y;
    cout<<x<<"-"<<y<<"="<<j;//<<x-y<<endl;
    cout<<endl;
    k=*x**y;
    cout<<"multiplication on pointers"<<endl;
    cout<<x<<"x"<<y<<"="<<k;//<<x*y<<endl;
    cout<<endl;
    m=(*x)/(*y);
    cout<<"division on pointers"<<endl;
    cout<<x<<"/"<<y<<"="<<m;//<<x/y<<endl;
    cout<<endl;
}
