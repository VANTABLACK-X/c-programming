#include<math.h>
#include<stdio.h>

int main()
{
    int x=0;
    float s,c;
    
    while (x<=180)
    {
        s=sin(x);
        c=cos(x);
        printf("x%d sin%0.2f cos%0.2f\n",x,s,c);
        x=x+15;
    }
    return 0;
}