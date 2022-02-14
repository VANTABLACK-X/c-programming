#include<stdio.h>
#include<math.h>

int main()
{
    float p,cost,p1,cost1;
    for (p=0;p<=10;p=p+1)
    {
        cost=40-8*p+p*p;
        if(p==0)
        {
         cost1=cost;
         continue;
        }
        if(cost>=cost1)
         break;
         cost1=cost;
         p1=p;
    }
    p=(p+p1)/2.0;
    cost=40-8*p+p*p;
    printf("MINIMUM COST =%.2f AT P =%.1f",cost,p);

    return 0;
}