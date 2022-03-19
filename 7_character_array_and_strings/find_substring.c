#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="this is a string",substr[]="it";
    if (strstr(str,substr)!=NULL)
    printf("'%s' is the substring\n",substr);
    else
    printf("'%s' is not in '%s'",substr,str);
}