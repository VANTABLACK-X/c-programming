#include<stdio.h>
#include<math.h>

int main()
{
    int weight,count=0,i;
    float height;
     
    printf("enter studesnts weight and height :\n");
    for ( i = 1; i <=3; i++)
    {
        scanf("%d%f",&weight,&height);
        if (weight<=50&&height>=170)
        {
            count=count+1;
        }
    }
    printf("number of eligible students : %d",count);
    return 0;
}