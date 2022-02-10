#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,count,n;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("prime numbers between 0 to %d is :",n);
    for (j=1;j<=n;j++)
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
          printf("%4d",j);
        }
    }
    return 0;
}