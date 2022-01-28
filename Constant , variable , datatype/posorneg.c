#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    scanf("%d",&num);
    if (num<=0)
    {
        printf("%d is a negative number",num);
    }
    else
    {
        printf("%d is a positive number",num);
    }
    return 0;
}