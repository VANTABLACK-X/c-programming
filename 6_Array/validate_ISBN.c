#include<stdio.h>
#include<math.h>

int main()
{
    int num[20],i,sum,rem;
    printf("enter the 10 digit ISBN book number :\n");
    for ( i = 1; i <=10; i++)
    {
        scanf("%d",&num[i]);
    }
    sum=(1*num[1])+(2*num[2])+(3*num[3])+(4*num[4])+(5*num[5])+(6*num[6])+(7*num[7])+(8*num[8])+(9*num[9]);
    rem=sum%11;
    if (rem==num[10])
    printf("this is a valid ISBN \n");
    else
    printf("this is a invalid ISBN! \n");
    
    return 0;
}