//utsav chandra
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int s=1;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            s=i*j;
            cout<<setw(3)<<s;
        }
     cout<<endl;
    }
}
