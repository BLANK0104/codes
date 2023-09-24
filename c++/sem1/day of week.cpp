//utsav chandra
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cout<<"enter the number to be converted to name of day: ";
    cin>>a;

    switch(a){
    case(1):{
        cout<<"monday"<<endl;
    break;}
    case(2):{
        cout<<"tuesday"<<endl;
    break;}
    case(3):{
        cout<<"wednesday"<<endl;
    break;}
     case(4):{
        cout<<"thursday"<<endl;
     break;}
        case(5):{
        cout<<"friday"<<endl;
        break;}
     case(6):{
        cout<<"saturday"<<endl;
        break;}
     case(7):{
        cout<<"sunday"<<endl;
        break;}

     default:{
     cout<<"please enter valid number"<<endl;}
}

}
