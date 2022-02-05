#include<stdio.h>
#include<math.h>

int main()
{
    int i,num;
    unsigned long long factorial=1;
    printf("enter the Factorial number\n");
    scanf("%d",&num);
    if (num<0)
    {
        printf("invalid number !\n");
    }
    else
    {
        for (i=1;i<=num;++i)
        {
            factorial=factorial*i;
        }
    }
    printf("Factorial of %d is %llu",num,factorial);
    return 0;
}