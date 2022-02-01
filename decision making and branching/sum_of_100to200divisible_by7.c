#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,n;
    n=105;
    
    while(n<=200&&n%7==0)
    {
     sum=sum+n;
     n=n+7;
    }
    printf("sum = %d",sum);
    return 0;
}