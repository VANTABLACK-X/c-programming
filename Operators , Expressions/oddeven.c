#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d id odd number",a);
    }
    return 0;
}