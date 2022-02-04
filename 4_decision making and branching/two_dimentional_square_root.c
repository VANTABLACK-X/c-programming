#include<stdio.h>
#include<math.h>

void main()
{
    double ans,i,j,sum;
    for (i=0;i<=9;i++)
    {
        for (j=i;j<=(i+0.9);j+=0.1)
        {
            sum=i+j;
            ans=sqrt(sum);
            printf("   %.4f",ans);
        }
        printf("\n");
    }
    
}