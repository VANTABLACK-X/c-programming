#define lambda 0.001
#include<stdio.h>
#include<math.h>

int main()
{
    int i,t,R;
    float r;
    for ( i = 0; i <27; i++)
    {
        printf("__");
    }
    printf("\n");
    for ( t = 1; t <3000; t+=150)
    {
        r=exp(-lambda*t);
        R=(int)(50*r+0.5);
        printf("|");
        for ( i = 1; i <=R; i++)
        {
            printf("*");
        }
        printf("#\n");
    }
    for ( i = 1; i <=3; i++)
    {
        printf("|\n");
    }
    return 0;
}