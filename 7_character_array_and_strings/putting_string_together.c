#include<stdio.h>

void main()
{
    int i,j,k;
    char fst_name[10]={"viswanath"};
    char scd_name[10]={"pratap"};
    char lst_name[10]={"singh"};
    char name[30];
    for ( i = 0; i < fst_name[i]!='\0'; i++)
    {
        name[i]=fst_name[i];
    }
    name[i]=' ';
    for ( j = 0; scd_name[j]!='\0'; j++)
    {
        name[i+j+1]=scd_name[j];
    }
    name[i+j+1]=' ';
    for ( k = 0; lst_name[k]!='\0'; k++)
    {
        name[i+j+k+2]=lst_name[k];
    }
    name[i+j+k+2]='\0';
    printf("\n%s",name);
}