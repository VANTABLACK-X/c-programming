#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float total,value,x[10];
    printf("enter the real numbers:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%f",&value);
        x[i]=value;
    }
    total=0.0;
    for ( i = 0; i < 10; i++)
    {
        total=total+x[i]*x[i];
    }
    for ( i = 0; i <10; i++)
    {
        printf("X[%2d] = %.2f\n",i+1,x[i]);
    }
    printf("total = %.2f",total);
    return 0;
}