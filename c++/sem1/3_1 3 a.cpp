//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int node,curvalue,Count,Switch;
    cout<<"enter node ";
    cin>>node;

    switch(node){

    case(15):{
    curvalue+=5;
    Count++;}

    case(40):{
    curvalue*=1.5;
    Count++;}

    default:{
    curvalue-=2;}
    }
return 0;
}
