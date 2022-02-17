#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i,j,len;
    char bin[25];
    printf("enter 8 bit binary number\n");
    scanf("%s",&bin);
    for ( i = 0; bin[i]!='\0'; i++)
    {
        if (bin[i]!='1'&&bin[i]!='0')
        exit(0);
    }
    len=strlen(bin);
    for ( i = len-1;i>=0 ; i--)   /*OR  for(i=len-1;bin[i]!='1;i--); and u dont have to use if statement*/
    {
        if(bin[i]=='1')
        break;
    }
    /*for 1's complement dont use second for loop , change this loop as for(j=len-1;j>=0;j--)*/

    for ( j = i-1; j >=0; j--)    
    {
        if(bin[j]=='1')
        bin[j]='0';
        else
        bin[j]='1';
    }
    printf("2's complement is : %s",bin);
}