#include<stdio.h>
#include<string.h>

void main()
{
    char chk='t',str[10];
    int len,left,right;
    printf("enter the string\n");
    scanf("%s",str);
    len=strlen(str);
    left=0;
    right=len-1;
    while (left<right&&chk=='t')
    {
        if (str[left]!=str[right])
        chk='f';
        
        left++;
        right--;
    }
    if(chk=='t')
    printf("this string is palindrome\n");
    else
    printf("this string is not a palindrome\n");
}