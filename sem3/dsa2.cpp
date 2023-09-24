//consider the foloowing array:
// 35 18 7 12 5 23 16 3 1
//insert 99 at index 2

#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {35, 18, 7, 12, 5, 23, 16, 3, 1};
    int i, j, temp;
    for (i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 9; i++)
    {
        if (i == 2)
        {
            temp = arr[i];
            arr[i] = 99;
            for (j = i + 1; j < 9; j++)
            {
                arr[j] = temp;
                temp = arr[j + 1];
            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}