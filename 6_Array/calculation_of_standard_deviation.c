#define max 100
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float value[max],sum,mean,deviation,sumsqr,variance,stddrviation;
    sum=sumsqr=n=0;
    printf("enter the values and enter -1 to end\n");
    for ( i = 1; i <=max; i++)
    {
        scanf("%f",&value[i]);
        if (value[i]==-1)
        break;
        sum=sum+value[i];
        n=n+1;
    }
    mean=sum/(float)n;
    for ( i = 1; i <=n; i++)
    {
        deviation=value[i]-mean;
        sumsqr+=deviation*deviation;
    }
    variance=sumsqr/(float)n;
    stddrviation=sqrt(variance);
    printf("\nNumber of items = %d",n);
    printf("\nMean = %f",mean);
    printf("\nStandard Deviation = %f",stddrviation);
    return 0;
}