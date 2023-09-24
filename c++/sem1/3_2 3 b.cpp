//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a;
    cout<<"enter grade obtained ";
    cin>>a;

    switch(a){

    case'A':{
        cout<<"very good"<<endl;
    break;}

    case'B':{
        cout<<"good"<<endl;
    break;}

    case'C':{
        cout<<"moderate"<<endl;
    break;}

    case'D':{
        cout<<"try harder"<<endl;
    break;}

    default:{
        cout<<"please enter grade between A and D"<<endl;}
    }
}
