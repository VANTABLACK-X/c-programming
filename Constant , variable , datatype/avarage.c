#include<stdio.h>
#include<math.h>

int main()
{
    int count=0,n=10;
    float num,sum=0,avrg;
    while (count<n)
    {
        scanf("%f",&num);
        sum=sum+num;
        count=count+1;
    }
    /* dont use count to devide sum in avrg bcs count final num is 9 not 10*/
    
    avrg=(float)sum/n;
    printf("n=%d sum=%f average=%f",n,sum,avrg);
    return 0;
}