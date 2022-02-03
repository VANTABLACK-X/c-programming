#include<stdio.h>
#include<math.h>

int main()
{
    int i,count,n;
    count=0;
    printf("enter the number to find its a prime number or not\n");
    scanf("%d",&n);
     
    for (i=1;i<=n;i++)       
    {
        if (n%i==0)
        {
            count=count+1;
        }
    }
    if (count==2)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is a not prime number\n",n);
    }
    
    return 0;
}