#include <iostream>
using namespace std;

class dist {
private:
	int FT, IN;

public:
	void setdist(int x, int y)
	{
		FT = x;
		IN = y;
	}
	void showdist()
	{

		cout << endl
			<< FT << "." << IN ;
	}

	void normalize()
	{
		FT = FT + IN / 12;
		IN = IN % 12;
	}
	dist operator+(dist d)
	{
		dist temp;
		temp.IN = IN + d.IN;
		temp.FT = FT + d.FT;
		temp.normalize();
		return (temp);
	}
};
int main()
{
    int x,y,z,a,b,c;
	dist d1, d2, d3;
	cout<<"enter value of feet in D1:";
	cin>>a;
	cout<<"enter value of inches in D1:";
	cin>>b;
	cout<<"enter value of feet in D2:";
	cin>>x;
	cout<<"enter value of inches in D2:";
	cin>>y;
	d1.setdist(a, b);
	d2.setdist(x, y);

	d3 = d1 + d2;

	cout<<"D1 = ";
	d1.showdist();
	cout<<"D1 = ";
	d2.showdist();
	d3.showdist();
	cin.get();

	return 0;
}
