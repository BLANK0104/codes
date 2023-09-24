#include <iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"enter priciple amount: "<<endl;
    cin>>p;
    cout<<"enter time: "<<endl;
    cin>>t;
    cout<<"enter rate of interest: "<<endl;
    cin>>r;
    si=((p*r*t)/100);
    cout<<"simple interest is: "<<si<<endl;
    return 0;
}
