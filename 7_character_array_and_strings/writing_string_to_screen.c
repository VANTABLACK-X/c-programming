#include<stdio.h>

void main()
{
    int i,d;
    char str[]="Cprogramming";       /*1-(%12.*s),2-(%.*s|),3-(%*.1s|)*/
    printf("\n");
    for ( i = 0; i <=11; i++)
    {
        d=i+1;
        printf("%-12.*s\n",d,str);
    }
    for ( i = 11; i >0; i--)
    {
        d=i+1;
        printf("%-12.*s\n",d,str);
    }
}