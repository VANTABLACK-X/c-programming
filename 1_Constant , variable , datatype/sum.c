#include<stdio.h>
#include<math.h>

int main()
{
   int n=1;
   float div,sum=0,num;
   scanf("%f",&num);
   while (n<num)
   {
       div=(float)1/n;
       sum=sum+div;
       n=n+1;
   }
   printf("sum=%f",sum);
   return 0;
}