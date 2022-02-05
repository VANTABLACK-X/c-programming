#include<stdio.h>
#include<math.h>

int main()
{
    int n,count;
    float y,x;
    count=1;
    y=1.0;
    printf("enter X and N value\n");
    scanf("%f%d",&x,&n);

    while (count<=n)
    {
        y=y*x;
        count=count+1;
    }
    printf("x =%f n =%d \nx to power n =%f",x,n,y);
    return 0;
}