#include <iostream>
using namespace std;
int main()
{
    int a[5]={3,6,46,7,8};
    int i,b;
    cout<<"enter element number: ";
    cin>>i;
    cout<<a[i]<<endl;

    b=1000+(i*sizeof(int));
    cout<<"address is: "<<b;
}
