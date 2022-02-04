#include<stdio.h>
#include<math.h>

int main()
{
    double x,y;
    int count;
    count=1;
    printf("enter 5 numbers:\n");
    read:
    scanf("%lf",&x);
    if (x<0)
    {
        printf("the value -%d is negative\n");
    }
    else
    {
        y=sqrt(x);
        printf("%lf\t %lf\n",x,y);
    }
    count=count+1;
    if (count<=5)
    goto read;
    printf("\nthe end of computation");
    return 0;
}