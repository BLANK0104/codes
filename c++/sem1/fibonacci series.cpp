//utsav chandra
#include<iostream>
using namespace std;
int main()
{
    int a,t1,t2,tn;
    cout<<"enter number of terms ";
    cin>>a;
    t1=0;
    t2=1;
    if(a==1){
            cout<<t1;}
    if(a==2){
            cout<<t1<<","<<t2;}

    for(int i=1;i<=a;i++){
        tn=t1+t2;
        cout<<tn<<",";
        t1=t2;
        t2=tn;
    }

}
