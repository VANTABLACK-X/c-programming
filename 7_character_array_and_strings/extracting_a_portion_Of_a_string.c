#include<stdio.h>
#include<string.h>

void main()
{
    char str[81],str1[81];
    int i,m,n;
    printf("enter the string without space\n");
    scanf("%s",str);
    printf("enter M and N values to extract a portion of string\n");
    scanf("%d%d",&m,&n);
   
    for ( i = 0; i <=n-1; i++)
    {
        str1[i]=str[m-1+i];
    }
    str1[i]='\0';
    printf("%s",str1);
}