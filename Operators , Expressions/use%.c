#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=((a%100)*10)/10;
    printf("%d",b);
    return 0;
}