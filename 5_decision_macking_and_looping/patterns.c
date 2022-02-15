#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k;
    char ch;
    ch='A';
    k=1;
    printf("a)");
    for (i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if(i%2==0)
            {
                printf("%c",ch);
                ch=ch+1;
            }
            else
            {
                printf("%d",k);
                k=k+1;
            }
        }
        printf("\n");
    }
    printf("b)\n");
    for (i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            k=j%2;
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}