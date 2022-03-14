#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("enter the string\n");
    gets(str);
    printf("target\n");
    ch=getchar();
    for ( i = 0; str[i]; i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
    }
    printf("char %c occurs %d times",ch,count);
    return 0;
}