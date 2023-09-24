#include<iostream>
using namespace std;

class sum{
    public:
    void add(int a,int b)
    {
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a<<"+"<<b<<"="<<c<<"="<<a+b+c<<endl;
    }
    void add(float a,float b)
    {
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
};

int main()
{
    sum s;
    int a,b,x,y,z;
    float m,n;
    cout<<"enter 2 integers:";
    cin>>a>>b;
    cout<<"enter 3 integers:";
    cin>>x>>y>>z;
    cout<<"enter 2 floating point numbers:";
    cin>>m>>n;
    s.add(a,b);
    s.add(x,y,z);
    s.add(m,n);
    cin.get();
    return 0;
}
