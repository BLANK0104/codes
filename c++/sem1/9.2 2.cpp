#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2;
    int *x=&a;
    int *y=&b;

    cout<<"initial values: "<<*x<<" "<<*y<<" "<<endl;
    *x=*x+*y;
    cout<<*x<<" "<<*y<<" "<<endl;
    *y=*x-*y;
    cout<<*x<<" "<<*y<<" "<<endl;
    *x=*x-*y;
    cout<<"reversed values: "<<*x<<" "<<*y;

}
