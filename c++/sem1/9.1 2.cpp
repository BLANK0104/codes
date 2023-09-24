#include<iostream>
using namespace std;

struct student
{
    int code;
    char name[50];
    int marks;
    char dept;
};

int main()
{
    student s[100];
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
        cout<<"enter code: ";
        cin>>s[i].code;
        cout<<"enter name: ";
        cin>>s[i].name;
        cout<<"enter marks: ";
        cin>>s[i].marks;
        cout<<"enter department: ";
        cin>>s[i].dept;
        cout<<endl;
    }
    cout<<"\n\n";

        for (i=1;i<=x;i++)
    {
        if(i==1){cout<<"1st entry: "<<endl;}
        else if(i==2){cout<<"2nd entry: "<<endl;}
        else if(i==3){cout<<"3rd entry: "<<endl;}
        else{cout<<"enter "<<i<<"th entry: "<<endl;}
        cout<<"code: ";
        cout<<s[i].code<<endl;
        cout<<"name: ";
        cout<<s[i].name<<endl;
        cout<<"marks: ";
        cout<<s[i].marks<<endl;
        cout<<"department: ";
        cout<<s[i].dept<<endl;
        cout<<endl;
    }
}
