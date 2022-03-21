#include<stdio.h>
#include<string.h>

void main()
{
    char name[30];
    int i,len;
    printf("enter your name:\n");
    gets(name);
    len=strlen(name);
    printf("ASCI value of your name is :\n");
    for ( i = 0; i < len; i++)
    {
        printf(" %d",name[i]);
    }
    
}