#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"num1=";
    cin>>a;
    cout<<"num2=";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"num1 is"<<a<<endl;
    cout<<"num2 is"<<b<<endl;
    return 0;
}
