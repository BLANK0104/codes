//utsav chandra
#include<iostream>
using namespace std;
int main ()
{
    char a,b,c;
    cout<<"enter desired charecter: ";
    cin>>a;

    if(a>97&&a<122){
        cout<<"entered charecter is small"<<endl;
        c=a-32;
        cout<<"your charecter after conversion is "<<c<<endl;}
    if(a>65&&a<90){
            cout<<"entered charecter is capital"<<endl;
            b=a+32;
            cout<<"your charecter after conversion is "<<b<<endl;}


}
