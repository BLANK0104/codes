//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,d,e,f,g;
    float b,c;
    cout<<"circle=1"<<endl;
    cout<<"rectangle=2"<<endl;
    cout<<"triangle=3"<<endl;
    cout<<"square=4"<<endl;
    cout<<"enter your choice: ";
    cin>>a;

    switch(a){

    case(1):
        cout<<"enter radius: ";
        cin>>b;
        cout<<"area of circle is "<<3.14*b*b;
        break;
    case(2):
        cout<<"enter length: ";
        cin>>b;
        cout<<"enter breadth: ";
        cin>>c;
        cout<<"area of rectangle is "<<b*c;
        break;
    case(3):
        cout<<"enter base of traingle: ";
        cin>>b;
        cout<<"enter height of triangle: ";
        cin>>c;
        cout<<"area of triangle is "<<0.5*b*c;
        break;
    case(4):
        cout<<"enter side of square: ";
        cin>>b;
        cout<<"area of square is: "<<b*b;
        break;
    default:
        cout<<"please select a valid shape";
}
}
