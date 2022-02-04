#define item 4
#include<stdio.h>
#include<math.h>

int main()
{
    int quantity[5],i;
    float rate[5],value,total_value;
    char code[5][5];

    i=1;
    while (i<=item)
    {
        printf("enter code quantity and rate :\n");
        scanf("%s %d %f",&code[i],&quantity[i],&rate[i]);
        i=i+1;
    }
    printf("        INVENTORY\n\n");
    printf("code    quantity    rate      value\n\n");

    i=1;
    while (i<=item)
    {
        value=quantity[i]*rate[i];
        printf("%s     %d     %.2f      %e\n",code[i],quantity[i],rate[i],value);
        total_value=total_value+value;
        i=i+1;
    }
    printf("\n\n");
    printf("total value = %e",total_value);

    return 0;
}