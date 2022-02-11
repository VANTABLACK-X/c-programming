#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float num,sum,avrg;
    printf("this program computes the average of a given numbers\nenter negative number to enf the program\n");
    printf("enter the numbers\n");
    sum=0;
    for (i=1;i<=1000;i++)
    {
        scanf("%f",&num);
        if(num<0)
        {
          break;
        }
        sum=sum+num;
    }
    avrg=sum/(float)(i-1);
    printf("\n");
    printf("number of values =%d\n",i-1);
    printf("sum =%f\n",sum);
    printf("average =%f\n",avrg);
    return 0;
}