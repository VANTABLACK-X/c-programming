#define accurancy 0.0001
#include<stdio.h>
#include<math.h>

int main()
{
    int count,n;
    float term,sum,x;
    printf("enter the value ");
    scanf("%f",&x);
    count=n=term=sum=1;
    while (n<=100)
    {
        term=(float)term*(x/n);
        sum=(float)sum+term;
        count=count+1;
        if (term<accurancy)
        {
            n=999;
        }
        else
        {
            n=n+1;
        }   
    }
    printf("x = %.1f\nterm = %d\nsum = %f",x,count,sum);
    return 0;
} 