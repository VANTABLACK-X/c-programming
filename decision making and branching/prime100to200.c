#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,count,n;
    n=0;
    
    for (j=100;j<=200;j++)
    {
     count=0;
        for (i=1;i<=j;i++)       
        {
            if (j%i==0)
            {
               count=count+1;
            }
        }
        if (count==2)
        {
         printf("%d\n",j);
         n=n+1;
        }
    }
    printf("%d number of primes in 100 to 200",n);
  
    return 0;
}