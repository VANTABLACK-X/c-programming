#define max 10
#include<stdio.h>
#include<math.h>

int main()
{
    int m,x,binom;
    printf("mx");
    for (m=0;m<=10;m++)
    {
        printf("%4d",m);
    }
    printf("\n_________________________________________________\n");
    m=0;
    do
    {
        printf("%2d",m);
        while (x<=m)
        {
            if (m==0||x==0)
            {
                printf("%4d",binom);
            }
            else
            {
                printf("%4d",binom);
            }
            x=x+1;
        }
        printf("\n");
        m=m+1;
    } while (m<=max);
    printf("\n_________________________________________________\n");
    return 0;
}