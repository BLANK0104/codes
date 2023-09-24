//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of 1st number: ";
    cin>>a;
    cout<<"enter value of 2nd number: ";
    cin>>b;
    cout<<"enter value of 3rd number: ";
    cin>>c;

    if(a>b&&a>c){
        cout<<"a is the largest number";
    }
    else if(b>a&&b>c){
        cout<<"b is the largest number";
    }
    else{
        cout<<"c is the largest number";
    }
    return 0;
}
