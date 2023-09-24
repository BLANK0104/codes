//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int s;
    float h,d,a;
    cout<<"enter salary: ";
    cin>>s;
    d=s*15.00/100.00;
    cout<<"DA is: "<<d<<endl;
    h=s*5.00/100.00;
    cout<<"HRA is: "<<h<<endl;
    a=s+d+h;
    cout<<"gross salary is: "<<a<<endl;
    return 0;
}
