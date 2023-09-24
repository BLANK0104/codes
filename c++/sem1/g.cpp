#include<iostream>
using namespace std;
int main() {
    
    int n,m,i,j;
   
    
    cout<<"Enter the no. of rows : ";
    cin>>n;
    
   
   cout<<"Enter the no. of columns : ";
    cin>>m;
     int array[n][m];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"Enter the elements of matrix : "<<"["<<i<<","<<j<<"]=";
            cin>>array[i][j];
        }
    }
    
    
    
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        {
         cout<<"The matrix is : "<<"["<<i<<","<<j<<"]="<<array[i][j]<<endl;
            
        }
    
    }
    cin.get();
    return 0;
}