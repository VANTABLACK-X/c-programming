#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,space;
    
    printf("a)\n");
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%2d",i);
        }
        printf("\n");
    }

    printf("\nb)\n");
    for (i=5;i>=1;i--)
    {
        for (space=0;space<5-i;space++)
        {
            printf("  ");
        }
        
        for (j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}