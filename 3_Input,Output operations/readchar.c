#include<stdio.h>

void main()
{
    char ch;
    printf("if u want to know my name type yes or no\n");
    ch=getchar();
    if(ch =='y'||ch=='Y')
    {
        printf("name ");
    }
    else
    {
        printf("no name");
    }
   
}