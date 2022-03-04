#include<stdio.h>
#include<math.h>

int main()
{
    int a1[10][10],a2[10][10],c[10][10],i,j,k,a,b;
    printf("enter the size of the matrix:\n");
    scanf("%d",&a);
    b=a;
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            printf("\nenter the first matrix element : ");
            scanf("%d",&a1[i][j]);
        }
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            printf("\nenter the second matrix element : ");
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\n\nentered matrixes are:\n");
    for ( i = 0; i < a; i++)
    {
        printf("\n");
        for ( j = 0; j < b; j++)
        {
            printf("%d",a1[i][j]);
        }
    }
    printf("\n");
    for ( i = 0; i < a; i++)
    {
        printf("\n");
        for ( j = 0; j < b; j++)
        {
            printf("%d",a2[i][j]);
        }
    }
    printf("\n\nproduct of the two matrixes is\n");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            c[i][j]=0;
            for ( k = 0; k < a; k++)
            {
                c[i][j]=c[i][j]+a1[i][k]*a2[k][j];
            }
        }
    }
    for ( i = 0; i < a; i++)
    {
        printf("\n");
        for ( j = 0; j < b; j++)
        {
            printf("%d",c[i][j]);
        }
    }
    return 0;
}