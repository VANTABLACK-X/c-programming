#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    printf("enter X,Y,Z values\n");
    scanf("%d%d%d",&x,&y,&z);
    
    if (x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
    {
        printf("it is a right angle triangle\n");
    }
    else
    {
        printf("it is not a right angle triangle\n");
    }
    return 0;
}    