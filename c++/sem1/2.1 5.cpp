//utsav chandra
#include<iostream>
using namespace std;
int main ()
{
    int rollno,msub1,msub2,msub3,msub4,msub5,msum;
    float score;

    cout<<"enter rollno: ";
    cin>>rollno;
    cout<<"enter msub1: ";
    cin>>msub1;
    cout<<"enter msub2: ";
    cin>>msub2;
    cout<<"enter msub3: ";
    cin>>msub3;
    cout<<"enter msub4: ";
    cin>>msub4;
    cout<<"enter msub5: ";
    cin>>msub5;
    msum=msub1+msub2+msub3+msub4+msub5;
    cout<<msum<<endl;
    score=(msum/500.00)*100;
    cout<<"score is "<<score<<endl;
    cout<<"rollno is: "<<rollno;
    return 0;
}
