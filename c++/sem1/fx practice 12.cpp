#include<bits/stdc++.h>

int str_upp(char c[])

{
    int i;
    char x;
    printf("\n \n");
    for(i=0;i<strlen(c);i++)
        {
            x=toupper(c[i]);
            printf("%c",x);
        }
        return (0);

}

int main()
{
    string c;
    cout<<"enter string: "
    cin>>c;
    printf("Enter string : \n");
    scanf("%s",c);
    str_upp(c) ;
    getch();

}
