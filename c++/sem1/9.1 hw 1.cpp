#include<iostream>
using namespace std;

struct off
{
    char cpu[20];
    int hdd;
    char kb[20];
    char mt[20];
    char mon[20];
};

int main()
{
    off f[50];
    int i;
    for (i=1;i<50-1;i++)
    {
        cout<<"enter cpu type of computer "<<i;
        cin>>f[i].cpu;
        cout<<"enter hard disk size of computer "<<i;
        cin>>f[i].hdd;
        cout<<"enter keyboard type of computer "<<i;
        cin>>f[i].kb;
        cout<<"enter mouse type of computer "<<i;
        cin>>f[i].mt;
        cout<<"enter monitor type of computer "<<i;
        cin>>f[i].mon;
    }

    for (i=1;i<50-1;i++)
    {
        if (f[i].hdd>8)
        {
            cout<<"computer with hard disk size greater than 8 gb are: "<<endl;
            cout<<"computer "<<i<<endl;
            cout<<"cpu type: "<<f[i].cpu<<endl;
            cout<<"hard disk size: "<<f[i].hdd<<endl;
            cout<<"keyboard type: "<<f[i].kb<<endl;
            cout<<"mouse type: "<<f[i].mt<<endl;
            cout<<"monitor type: "<<f[i].mon<<endl;
            cout<<"\n\n";
        }
    }
}
