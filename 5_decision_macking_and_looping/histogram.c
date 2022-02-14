#define N 5
#include<stdio.h>
#include<math.h>

int main()
{
    int value[N];
    int i,j,n,x;
    for (n=0;n<N;n++)
    {
        printf("enter the number of employees in group -%d :",n+1);
        scanf("%d",&x);
        value[n]=x;
        printf("%d\n",value[n]);
    }
    printf("\n");
    printf("         |\n");
    for (n=0;n<N;n++)
    {
        for (i=1;i<=3;i++)
        {
            if(i==2)
            printf("Group -%d |",n+1);
            else
            printf("         |");

            for (j=1;j<=value[n]; j++)
            printf("*");
            if(i==2)
            printf("(%d)\n",value[n]);
            else
            printf("\n");
        }
        printf("         |\n");
    }
    return 0;
}