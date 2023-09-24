//utsav chandra
#include <iostream>
using namespace std;
int main()
{
    int a[100],count,i,min,max;
    cout<<"Enter Number of Elements: ";
    cin>>count;
    cout<<"Enter "<<count<<" numbers "<<endl;

    for(i=0;i<count;i++)
        {
        cin >> a[i];
        }
    min=a[0];//number assignment
    for(i=0;i<count;i++)//number reading
        {
        if(a[i]<min)//finding least
            {
            min=a[i];//assigning least
            }
        }
    cout<<"Minimum Element is "<<min<<endl;;//printing least

    max=a[0];//number assignment
    for(i=0;i<count;i++)//number reading
        {
        if(a[i]>max)//finding max
            {
            max=a[i];//assigning max
            }
        }
    cout<<"Maximum Element is "<<max;//printing max
}
