//utsav chandra
#include<iostream>
using namespace std;
int main ()

{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    if (n%2!=0)
    {
        cout<<"weird"<<endl;
    }
    else
    {
        if (n<5||n>2||n>20){
            cout<<"not weird"<<endl;
        }
        else if (n<20||n>5){
            cout<<"weird";
        }
    }
    return 0;
}
