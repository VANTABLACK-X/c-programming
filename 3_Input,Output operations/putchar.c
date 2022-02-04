#include<ctype.h>
#include<stdio.h>

int main()
{
    char ch;
    printf("enter charecter\n");
    ch=getchar();
    if (isupper(ch))
    {
        putchar(tolower(ch));
    }
    else
    {
        putchar(toupper(ch));
    }
    return 0;
}