#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    
    for(i=1;i<6;i++)
    {
         for(k=5-i;k>0;k--)
            {cout<<"  ";}
            
        for(j=0;j<i;j++)
        {
            
         cout<<setw(2)<<"*";
         cout<<"  ";
        }cout<<endl;
    }
    cin.get();
}
            