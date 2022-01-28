#include<stdio.h>
#include<math.h>

int main()
{
    int z,x;
    printf("enter z and x\n");
    scanf("%d%d",&z,&x);
    z=z<<2;
    x=x>>2;
    printf("z = %d  x = %d",z,x);
    return 0;
}