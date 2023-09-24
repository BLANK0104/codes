#include<iostream>
using namespace std;

struct hostel
{
    char name[20];
    char add[50];
    int charge;
    int room;
};

int main()
{
    hostel h[100];
    int x,i;
    cout<<"enter number of entries to be made: ";
    cin>>x;
    cout<<"enter "<<x<<" entries: "<<endl;

    for (i=1;i<=x;i++)
    {
        if(i==1){cout<<"1st entry: "<<endl;}
        else if(i==2){cout<<"2nd entry: "<<endl;}
        else if(i==3){cout<<"3rd entry: "<<endl;}
        else{cout<<"enter "<<i<<"th entry: "<<endl;}
        cout<<"enter name: ";
        cin>>h[i].name;
        cout<<"enter address: ";
        cin>>h[i].add;
        cout<<"enter room charge: ";
        cin>>h[i].charge;
        cout<<"enter number of rooms: ";
        cin>>h[i].room;
        cout<<endl;
    }
    cout<<"\n\n";

        for (i=1;i<=x;i++)
    {
        if(i==1){cout<<"1st entry: "<<endl;}
        else if(i==2){cout<<"2nd entry: "<<endl;}
        else if(i==3){cout<<"3rd entry: "<<endl;}
        else{cout<<"enter "<<i<<"th entry: "<<endl;}
        cout<<"name: ";
        cout<<h[i].name<<endl;
        cout<<"address: ";
        cout<<h[i].add<<endl;
        cout<<"room charge: ";
        cout<<h[i].charge<<endl;
        cout<<"number of rooms: ";
        cout<<h[i].room<<endl;
        cout<<endl;
    }

    for (i=1;i<=x;i++)
    {
        if(h[i].charge>=10000)
        {
            cout<<"entries with room charge more than 10000 are: "<<endl;
            if(i==1){cout<<"1st entry: "<<endl;}
            else if(i==2){cout<<"2nd entry: "<<endl;}
            else if(i==3){cout<<"3rd entry: "<<endl;}
            else{cout<<"enter "<<i<<"th entry: "<<endl;}
            cout<<"name: ";
            cout<<h[i].name<<endl;
            cout<<"address: ";
            cout<<h[i].add<<endl;
            cout<<"room charge: ";
            cout<<h[i].charge<<endl;
            cout<<"number of rooms: ";
            cout<<h[i].room<<endl;
            cout<<endl;
        }
    }
}
