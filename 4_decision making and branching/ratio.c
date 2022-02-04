#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    float ratio;
    printf("enter A,B,C,D values \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if (c-d!=0)
    {
        ratio=(float)(a+b)/(float)(c-d);
        printf("ratio = %f",ratio);
    }
    return 0;
}