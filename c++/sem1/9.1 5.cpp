#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int rno;
    int marks1,marks2,marks3;
    int gt;
};

int main()
{
    student s[100];
    int x,i,z;
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
        cin>>s[i].name;
        cout<<"enter roll number: ";
        cin>>s[i].rno;
        cout<<"enter marks for subject 1: ";
        cin>>s[i].marks1;
        cout<<"enter marks for subject 2: ";
        cin>>s[i].marks2;
        cout<<"enter marks for subject 3: ";
        cin>>s[i].marks3;
        s[i].gt=s[i].marks1+s[i].marks2+s[i].marks3;
        cout<<endl;
    }
    cout<<"\n\n";

    z=1;
    for(i=1;i<=x;i++)
    {
        if(z<s[i].gt)
        {
            if(i==1){cout<<"1st entry: "<<endl;}
            else if(i==2){cout<<"2nd entry: "<<endl;}
            else if(i==3){cout<<"3rd entry: "<<endl;}
            else{cout<<"enter "<<i<<"th entry: "<<endl;}
            cout<<"name: ";
            cout<<s[i].name<<endl;
            cout<<" roll number: ";
            cout<<s[i].rno<<endl;
            cout<<"marks for subject 1: ";
            cout<<s[i].marks1<<endl;
            cout<<"marks for subject 2: ";
            cout<<s[i].marks2<<endl;
            cout<<"marks for subject 3: ";
            cout<<s[i].marks3<<endl;
            cout<<"grand total: ";
            cout<<s[i].gt;
            cout<<endl;
        }

    }

}
