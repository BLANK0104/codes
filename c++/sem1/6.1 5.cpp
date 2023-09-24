#include<iostream>
using namespace std;
int main()
{
   int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    for(i=0;i<3;i++)
     { ++a[i];
     cout<<"1 "<<a[i]<<endl;
       a[i+1]++;
       cout<<"2 "<<a[i]<<endl;
       a[i++];
       cout<<"3 "<<a[i]<<endl;
     }
}
