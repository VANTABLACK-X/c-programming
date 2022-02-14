#include<stdio.h>
#include<math.h>

int main()
{
    int n,p;                                          /*V=P(1+r)power N*/
    double r,t,v;                                     /*p=1000-10000,r=0.10-0.20,n=1-10*/
    r=0.10;
    p=1000;
    printf("  P     N      R         V\n");
    for (n=1;n<=10;n++)
    {
        if (p<=10000&&r<=0.20)
        {
            t=pow((1+r),n);
            v=p*t;
            
        }
        printf("%5d  %2d   %.4lf   %6.4lf\n",p,n,r,v);
        p=p+1000;
        r=r+0.01;
    }
    return 0;
}