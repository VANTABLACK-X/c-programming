#define N 10
#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n;
    float t,a[N],median;
    printf("haow many numbers your gonna enter : ");
    scanf("%d\n",&n);
    for ( i = 1; i <=n; i++)
    {
        scanf("%f",&a[i]);
    }
    /*SORTING ALGORITHM*/
    for ( i = 1; i <=n-1; i++)
    {
        for ( j = 1; j <=n-i; j++)
        {
            if (a[j]<=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            else
            continue;
        }
    }
    if (n%2==0)
    {
        median=(a[n/2]+a[n/2+1])/2.0;
    }
    else
    {
        median=a[n/2+1];
    }
    for ( i = 1; i <=n; i++)
    {
        printf("%   f",a[i]);
    }
    printf("\nMEDIAN = %f",median);
    return 0;
}