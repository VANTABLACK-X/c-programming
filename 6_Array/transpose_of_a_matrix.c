#include<stdio.h>

void main()
{
    int i,j,a[3][3],b[3][3];
    
    printf("enetr 3 x 3 matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0;  j< 3; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the entered matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    /*transposing matrix*/
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("the transpose of the matrix is:\n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    
}