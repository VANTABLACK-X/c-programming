#define max 10
#include<stdio.h>
#include<math.h>

int main()
{
    typedef int values;
    values a,b,c;
    a=1;
    printf("enter which table you want bitch \n");
    scanf("%d",&b);
    while (a<=max)
    {
        c=a*b;
        printf("%d x %d = %d\n",a,b,c);
        a=a+1;
    }
    return 0;
}