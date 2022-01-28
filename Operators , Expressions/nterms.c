#include<stdio.h>
#include<math.h>

int main()
{
    int n,count=1;
    float term,sum=0;

    printf("enter the n value : ");
    scanf("%d",&n);
    
    term=1.0/n;

    while (count<=n)
    {
       sum=sum+term;
       count=count+1;    
    }
    printf("n = %d sum = %f",n,sum);
    return 0;
}