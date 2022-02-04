#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,b;
    printf("enter the number :");
    scanf("%d",&n);
    a=n%10;
    b=n%100;
    printf("right most one number is %d and last two digit is %d",a,b);
    return 0;
}