#include<stdio.h>

int main()
{
    int i,j,k,n,m;

    /* 1.*/
    printf("enter the number of rows:\n");
    scanf("%d",&n);                          /*enter 13*/
    k=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" %d",k++);
        }
        printf("\n");
    }

    /* 2.*/
    printf("enter the number of rows:\n");
    scanf("%d",&m);                          /*enter 5*/
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" %d",j%2);
        }
        printf("\n");
    }
    return 0;
}