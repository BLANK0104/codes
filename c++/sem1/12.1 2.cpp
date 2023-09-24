#include <iostream>
using namespace std;

class Time {
private:
	int HR, MIN;

public:
	void setTime(int x, int y)
	{
		HR = x;
		MIN = y;
	}
	void showTime()
	{
		cout << endl
			<< HR << ":" << MIN ;
	}

	void normalize()
	{
		HR = HR + MIN / 60;
		MIN = MIN % 60;
	}
	Time operator+(Time t)
	{
		Time temp;
		temp.MIN = MIN + t.MIN;
		temp.HR = HR + t.HR;
		temp.normalize();
		return (temp);
	}
};
int main()
{
    int x,y,z,a,b,c;
	Time t1, t2, t3;
	cout<<"enter value of hours in T1:";
	cin>>a;
	cout<<"enter value of minutes in T1:";
	cin>>b;
	cout<<"enter value of hours in T2:";
	cin>>x;
	cout<<"enter value of minutes in T2:";
	cin>>y;
	t1.setTime(a, b);
	t2.setTime(x, y);

	t3 = t1 + t2;

	t1.showTime();
	t2.showTime();
	t3.showTime();
	cin.get();

	return 0;
}
