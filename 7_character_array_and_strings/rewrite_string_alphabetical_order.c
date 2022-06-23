#include<stdio.h>
#include<string.h>

void main()
{
    char str[30],dummy;
    int i,sl;
    printf("enter the string\n");
    gets(str);
    sl=strlen(str);
    for ( i = 1; i <=sl; i++)
    {
        if (str[i-1]>str[i])
        {
            dummy=str[i-1];
            str[i-1]=str[i];
            str[i]=dummy;
        }
    }
    printf("%s",str);
}