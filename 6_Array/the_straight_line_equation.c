#include<stdio.h>
#include<math.h>

int main()
{
    int x[5]={1,2,3,4,5},y[5]={14,27,40,55,68},sum_x,sum_y,sum_xy,sum_x2,n,i,j;
    sum_x=sum_y=sum_xy=sum_x2=0;
    n=sizeof(x)/sizeof(x[0]);
    for ( i = 0; i < n; i++)
    {
        sum_x+=x[i];
        sum_y+=y[i];
        sum_xy+=x[i]*y[i];
        sum_x2+=x[i]*x[i];
    }
    printf("sum of x = %d\nsum of y = %d\nsum of (xy) = %d\nsum of x2 = %d",sum_x,sum_y,sum_xy,sum_x2);
    
    return 0;
}