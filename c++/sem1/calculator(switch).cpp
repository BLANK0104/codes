//utsav chandra
# include <iostream>
using namespace std;
int main() {
  char x;
  float num1, num2;
  cout << "Enter operator: +, -, *, /: ";
  cin >> x;
  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(x) {

    case 'A';'a':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

      case 'A':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case 's':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

      case 'S':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case 'm':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

      case 'M':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case 'd':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

       case 'D':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
       cout << "Error! oerator is not correct";
      break;
  }

  return 0;
}
