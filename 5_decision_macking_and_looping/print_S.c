#include<stdio.h>

int main()
{
    int i,j,space;
    printf("a)\n");
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            printf("S  ");
        }
        printf("\n");
    }
    printf("b)\n");
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
           
            if((i==2||i==3||i==4)&&(j==2||j==3||j==4))
            {
                printf("   ");
            }
            else
            {  
             printf("S  ");   
            }
        }
       printf("\n");
    }
    printf("c)\n");
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
           
            if(i==3&&j==3)
            {
                printf("O  ");
            }
            else
            {  
             printf("S  ");   
            }
        }
       printf("\n");
    }
    
    return 0;
}