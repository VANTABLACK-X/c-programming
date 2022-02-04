#include<stdio.h>
#include<math.h>

int main()
{
    int days,weeks,months,years;
    scanf("%d",&days);
    weeks=days/7;
    months=days/30;
    years=days/365;
    printf("%d days has %d weeks , %d months , %d years",days,weeks,months,years);
    return 0;
}