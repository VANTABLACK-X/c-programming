#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float discriminant,root1,root2;
    printf("enter a,b,c values : \n");
    scanf("%d %d %d",&a,&b,&c);

    discriminant=b*b-4*a*c;

    if (discriminant<0)
    {
        printf("the root is imaginary");
    }
    else
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root1 = %f",root1);
        printf("root2 = %f",root2);
    }
    return 0;
}