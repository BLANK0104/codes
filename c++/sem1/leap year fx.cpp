#include<iostream>
using namespace std;

int lp(int a)
{
    if (a%4==0&&a%100!=0||a%400==0)
        cout<<"leap year";
    else
        cout<<"not a leap year";
    return 0;


}




int main()
{
    int n;
    cout<<"enter year: ";
    cin>>n;
    lp(n);

}
