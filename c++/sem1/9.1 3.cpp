#include<iostream>
using namespace std;

struct employee
{
    char name[20];
    int id;
    float exp;
    int sal;
};

int main()
{
    employee e[100];
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
        cin>>e[i].name;
        cout<<"enter ID: ";
        cin>>e[i].id;
        cout<<"enter experience: ";
        cin>>e[i].exp;
        cout<<"enter salary: ";
        cin>>e[i].sal;
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
        cout<<e[i].name<<endl;
        cout<<"ID: ";
        cout<<e[i].id<<endl;
        cout<<"experience: ";
        cout<<e[i].exp<<endl;
        cout<<"salary: ";
        cout<<e[i].sal<<endl;
        cout<<endl;
    }

    for (i=1;i<=x;i++)
    {
        if(e[i].exp>=5)
        {
            cout<<"entries with experience more than 5 are: "<<endl;
            if(i==1){cout<<"1st entry: "<<endl;}
            else if(i==2){cout<<"2nd entry: "<<endl;}
            else if(i==3){cout<<"3rd entry: "<<endl;}
            else{cout<<"enter "<<i<<"th entry: "<<endl;}
            cout<<"name: ";
            cout<<e[i].name<<endl;
            cout<<"ID: ";
            cout<<e[i].id<<endl;
            cout<<"experience: ";
            cout<<e[i].exp<<endl;
            cout<<"salary: ";
            cout<<e[i].sal<<endl;
            cout<<endl;
        }
    }
}
