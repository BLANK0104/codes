//utsav chandra
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2,a,b,c,d,e,f;
    cout<<"enter coordinates of 1st point: ";
    cin>>x1>>y1;
    cout<<"enter coordinates of 2nd point: ";
    cin>>x2>>y2;
    a=x2-x1;
    b=y2-y1;
    c=pow(a,2)+pow(b,2);
    d=pow(c,0.500);
    cout<<"distance between 1st and 2nd point is: "<<d<<endl;
    e=(x1+x2)/2.00;
    f=(y1+y2)/2,00;
    cout<<"mid point is at "<<e<<","<<f;
    return 0;
}
