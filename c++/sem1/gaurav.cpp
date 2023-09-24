#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[10],s1[10],c=0;
    int x,i;
    cout<<"enter a word: ";
    cin>>s;
     cout<<"entered a word: "<<s<<endl;
     int n=strlen(s);
     cout<<n<<endl;

     for(int i=0;i<n;i++)
     {
         s1[i]=s[n-1-i];
     }
     cout<<s1<<"\n"<<s<<endl;
    int y=strcmp(s1,s);
    for(i=0;i<n;i++)
    {
        if(s[n-1-i]==s[i])
        {
            cout<<"palindrome";
        }
        else
            cout<<"not pplaindrome";
        break;
    }
    if(y==1)
    {
        cout<<"yes";
    }
    else{cout<<"no";}
    cout<<y;
}
