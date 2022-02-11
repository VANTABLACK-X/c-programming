#define max 10
#include<stdio.h>
#include<math.h>

int main()
{
    int i,x,binom;
    printf("mx");
    for (i=0;i<=10;i++)
    {
        printf("%4d",i);
    }
    printf("/n_________________________________________________\n");
    i=0;
    do
    {
        printf("%2d",i);
        x=0;
        binom=1;
        while (x<=i)
        {
            if (i==0||x==0)
            {
                printf("%4d",binom);
            }
            else
            {
                binom=binom*(i-x+1)/x;
                printf("%4d",binom);
            }
            x=x+1;
        }
        i=i+1;
        printf("\n");
        
    } while (i<=max);
    printf("______________________________________________________\n");
    return 0;
}