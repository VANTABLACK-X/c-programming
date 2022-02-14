#include<stdio.h>
#include<math.h>

void main()
{
    double ans,i,j,x;
    for (i=0;i<=9;i++)
    {
        for (j=i;j<=(i+0.9);j+=0.1)
        {
            x=i+j;
            ans=exp(-x);
            printf("   %.2lf",x);
        }
        printf("\n");
    }
    
}