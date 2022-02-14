#include<stdio.h>

int main()
{
    int i,j,space;
    for (i=1;i<=15;i++)
    {
        if (i==4||i==5||i==6)
        {
            for (j=1;j<=6;j++)
            {
                printf("*");
            }
            for (j=1;j<=12;j++)
            {
                printf(" ");
            }
        }
        else if (i==10||i==11||i==12)
        {
            for (j=1;j<=12;j++)
            {
                printf(" ");
            }
            for (j=1;j<=6;j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j=1;j<=18;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}