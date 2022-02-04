#include<stdio.h>
#include<math.h>

int main()
{
    int n=0;
    float num,rang,average,sum=0,highnum,lownum;
    printf("enter the numbers\n");

    input:
    scanf("%f",&num);
    if (num<0)
       goto output;
       n=n+1;
    if(n==1)
       highnum=lownum=num;
    else if(num>highnum)
       highnum=num;
    else if(num<lownum)
       lownum=num;
    sum=sum+num;
    goto input;

    output:
    average=sum/n;
    rang=highnum-lownum;
    printf("\n\n");
    printf("Total values = %d\n",n);
    printf("Highhest value = %f\nLowest value = %f\n",highnum,lownum);
    printf("Range = %f\nAverage = %f",rang,average);
    return 0;
}