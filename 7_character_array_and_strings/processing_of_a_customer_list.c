#define customers 3
#include<string.h>
#include<stdio.h>

void main()
{
    char f_name[20][10],s_name[20][10],l_name[20][10],name[20][20],phone_num[20][10],dummy[20];
    int i,j;

    printf("enter full name and telephone number :\n");
    for ( i = 0; i < customers; i++)
    {
        printf("\n%d:\n",i+1);
        scanf("%s%s%s%s",f_name[i],s_name[i],l_name[i],phone_num[i]);

        /*converting full name to last name with initials*/
        strcpy(name[i],l_name[i]);
        strcat(name[i],",");
        dummy[0]=f_name[i][0];
        dummy[1]='\0';
        strcat(name[i],dummy);
        strcat(name[i],".");
        dummy[0]=s_name[i][0];
        dummy[1]='\0';
        strcat(name[i],dummy);
    }
    for ( i = 1; i <=customers-1; i++)
    for ( j = 1; j <=customers-i; j++)
    if (strcmp(name[j-1],name[j])>0)
    {
        /*swapping names*/
        strcpy(dummy,name[j-1]);
        strcpy(name[j-1],name[j]);
        strcpy(name[j],dummy);
        /*swapping numbers*/
        strcpy(dummy,phone_num[j-1]);
        strcpy(phone_num[j-1],phone_num[j]);
        strcpy(phone_num[j],dummy);
    }
    printf("CUSTOMER LIST IN ALPHABATICAL ORDER:\n");
    for ( i = 0; i <customers; i++)
    {
        printf("\t%-20s\t%-10s\n",name[i],phone_num[i]);
    }
}