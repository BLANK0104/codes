#include<iostream>
using namespace std;
int main()
{
    //String values
    string str1 = "Pencil";
    string str2 = "Pencil";
    //Pointers
    string* ptr1 = &str1;    //points to str1
    string* ptr2 = &str2;    //points to str2
    //Comparing address
    cout << "ptr1 == ptr2 : " << (ptr1 == ptr2) << endl;
    cout<<ptr1<<"  "<<ptr2<<endl;
    //Comparing values
    cout << "*ptr1 == *ptr2 : " << (*ptr1 == *ptr2) << endl;
    cout<<*ptr1<<"  "<<*ptr2<<endl;
    return 0;
}
