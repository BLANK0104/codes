#include<iostream>
using namespace std;

class shapes
{
public:
    void area(float x,float y)
    {
        float a;
        a=x*y;
        cout<<"area of rectangle is "<<a<<" sq.";
        cout<<endl;
    }
    void area(float x)
    {
        float a;
        a=x*x;
        cout<<"area of square is "<<a<<" sq.";
        cout<<endl;
    }
};
int main()
{
    shapes s;
    s.area(3);
    s.area(4,5);
    cin.get();
}
