#include<stdio.h>
#include<math.h>

int main()
{
    int n,r;
    printf("enter the number to  reverse :");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}