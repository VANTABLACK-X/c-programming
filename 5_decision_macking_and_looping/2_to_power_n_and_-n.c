#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    long int p;
    double q;

    printf("_____________________________________________________\n");
    printf("  2 to power n      n       2 to power -n\n");
    printf("_____________________________________________________\n");

    for (n=0;n<21;n++)
    {
        if(n==0)
        p=1;
        else
        p=p*2;           /* 2 power  n*/
        q=0.1/(double)p; /* 2 power -n*/
        printf("%10d %10d %20.12lf\n",p,n,q);
    }
    printf("_____________________________________________________\n");
    return 0;
}