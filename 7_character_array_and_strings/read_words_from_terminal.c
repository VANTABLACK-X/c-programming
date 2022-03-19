#include<stdio.h>

int main()
{
    char str[10];
    /*if u enter 'hello world' its prints 'hello' only, because scanf dosnt read after if u enter white space
      so it stores 'hello' only*/
    /*if u working with strings use gets(),
      use getchar() for single character*/
    scanf("%s",&str);
    printf("%s",str);
    return 0;
}