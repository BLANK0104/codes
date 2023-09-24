//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter year to be checked: ";
    cin>>x;

    if(x%4==0&&x%100!=0||x%400==0){
        cout<<x<<" is a leap year";}
        else{
            cout<<x<<" is not a leap year";}


    return 0;
}
