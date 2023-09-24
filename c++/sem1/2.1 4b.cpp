//utsav chandra
//b. x1 + y2 + z3
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int a,x,y,z;
    cout<<"x1 + y2 + z3"<<endl;
    cout<<"enter value of x: ";
    cin>>x;
    cout<<"enter value of y: ";
    cin>>y;
    cout<<"enter value of z: ";
    cin>>z;
    a=x+pow(y,2)+pow(z,3);
    cout<<a;
    return 0;
}
