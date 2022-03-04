#include<stdio.h>

void main()
{
    int a1[10][10],a2[10][10],x[10][10],i,j;
    printf("enter 3x3 matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter first matrix elements :");
            scanf("%d",&a1[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter second matrix elements :");
            scanf("%d",&a2[i][j]);
        }
    }
    printf("first matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",a1[i][j]);
        }
    }
    printf("\nsecond matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",a2[i][j]);
        }
    }
    printf("\nsum of two matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            x[i][j]=a1[i][j]+a2[i][j];
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",x[i][j]);
        }
    }
    
}