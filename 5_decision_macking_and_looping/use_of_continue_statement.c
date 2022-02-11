#include<stdio.h>
#include<math.h>

int main()
{
    int count,negative;
    double square_root,num;
    printf("enter 9999 to end the program\n");
    count=0;
    negative=0;
    while (count<=100)
    {
       printf("enter the number :");
       scanf("%lf",&num);
       if(num==9999)
       break;
       if (num<0)
       {
           printf("the number is negative\n");
           negative++;
           continue;
       }
       square_root=sqrt(num);
       printf("number =%lf\nsquare root =%lf\n",num,square_root);
       count++;
    }
    printf("positive items =%d\n",count);
    printf("negative items =%d\n",negative);
    printf("end of data");

    return 0;
}