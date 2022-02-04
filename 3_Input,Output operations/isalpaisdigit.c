#include<stdio.h>
#include<ctype.h>

void main()
{
    char x;
    x=getchar();
    if (isalpha(x)>0)
    {
        printf("its a letter");
    }
    else if (isdigit(x)>0)
    {
        printf("its a number");
    }
    else
    {
        printf("its not a alphanumeric");
    }
}