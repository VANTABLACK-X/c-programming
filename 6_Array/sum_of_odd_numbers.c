#include<stdio.h>
#include<math.h>

int main()
{
    int a[10],sum,count,i;
    count=sum=0;
    printf("enter 10 random numbers\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2!=0)
        {
            count+=1;
            sum+=a[i];
        }
    }
    printf("there are %d odd numbers\nsum of all odd number = %d",count,sum);
    return 0;
}