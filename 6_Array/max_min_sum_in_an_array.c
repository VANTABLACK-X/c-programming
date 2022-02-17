#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,n[15],max,min,sum;
    float avrg;
    printf("enter 10 numbers :\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }
    max=min=n[0];
    sum=0;
    avrg=0;
    for ( i = 0; i < 10; i++)
    {
        sum=sum+n[i];
        if (min>=n[i])
        min=n[i];
        else
        max=n[i];
    }
    avrg=(float)sum/i;
    printf("min = %d max = %d sum = %d avrg = %.1f",min,max,sum,avrg);
}