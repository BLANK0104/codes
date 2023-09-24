#include <iostream>
using namespace std;

int arm(int num)
{
     int originalNum,remainder,result=0;
     originalNum = num;

     while(originalNum!=0)
        {
            remainder=originalNum%10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

    if(result==num)
        cout<<num <<" is an Armstrong number";
    else
        cout<<num<<" is not an Armstrong number.";
}

int main()
{
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    arm(num);
    return 0;
}
