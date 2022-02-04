#include<stdio.h>
#include<math.h>

int main()
{
    int n=0;
    float square,square_root;
    printf("number  square  square root\n");
    while (n<=100)
    {
        square=n*n;
        square_root=sqrt(n);
        printf("%d       %.2f        %.2f\n",n,square,square_root);
        n=n+10;
    }
    return 0;
}