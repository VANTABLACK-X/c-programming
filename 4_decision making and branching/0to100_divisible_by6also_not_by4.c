#include<stdio.h>
#include<math.h>

int main()
{
    int i,count;
    count=0;
   for ( i=1;i<=100;i++)
   {
       if (i%6==0&&i%4!=0)
       {
         printf("%d\n",i);
         count=count+1;     
        }
    }
    printf("\n%d numbers in 0 to 100 can divisible by 6",count);
    return 0;
}