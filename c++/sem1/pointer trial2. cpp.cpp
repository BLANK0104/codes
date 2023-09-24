#include <iostream>
using namespace std;
int main()
{
    int array[]={4, 5, 6, -1};
    int *ptr = array;
    //Loop until pointer points to last element
    while(*ptr != -1){
        ptr++;
    }
    //elements between 4(inclusive) and -1
    cout << ptr - array;
    return 0;
}
