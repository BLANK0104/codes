#include <iostream>
using namespace std;
class Room
{
    private:
    double length;
    double breadth;
    double height;
    public:
    // function to initialize private variables
    void initData(double len, double brth, double hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};
int main()
{
    // create object of Room class
    Room room1;
    //decalring variables for b,l.h
    int l,b,h;
    //assigning nconstant to variables
    cout<<"enter length: ";
    cin>>l;
    cout<<"enter breadth: ";
    cin>>b;
    cout<<"enter height: ";
    cin>>h;
    // pass the values of private variables as arguments
    room1.initData(l,b,h);
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;
    return 0;
}
