#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int num, num2, r, n = 0, result=0, p;
   cout << "Enter an integer: ";
   cin >> num;

   num2 = num;

   while (num2 != 0) {
      num2 /= 10;
      ++n;
   }
   num2 = num;

   while (num2 != 0) {
      r = num2 % 10;

      p = round(pow(r, n));
      result += p;
      num2 /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
