#include<stdio.h>
#include<math.h>

int main()
{
    int i,e,ne,count,age;
    printf("enter 10 age\n");
    e=0;
    for (i=1;i<=10;i++)
    {
        scanf("%d",&age);
        if (age>=50&&age<=60)
        {
            e=e+1;
            continue;
        }
    }
    printf("between 50 to 60 =%d",e);
    return 0;
}