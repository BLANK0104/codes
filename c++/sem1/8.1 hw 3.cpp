#include<iostream>
using namespace std;

int add(int a,int b,int c,int d)
{
    cout<<a+c<<"+"<<b+d<<"i";
    return 0;
}

int sub(int a,int b,int c,int d)
{
    cout<<a-c<<""<<b-d<<"i";
    return 0;
}

int mult(int a,int b,int c,int d)
{
    cout<<a*c<<"+"<<b*d<<"i";
    return 0;
}


int main()
{
    int a,b,c,d;
    int z;
    cout<<"enter 1st complex number: ";
    cin>>a>>b;
    cout<<"enter 2nd complex number: ";
    cin>>c>>d;

    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for substraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cin>>z;
    switch(z)
    {
    case(1):
        {
            add(a,b,c,d);
            break;
        }
    case(2):
        {
            sub(a,b,c,d);
            break;
        }
    case(3):
        {
            mult(a,b,c,d);
            break;
        }
    default:
        {
            cout<<"enter valid option";
        }
    }
}
