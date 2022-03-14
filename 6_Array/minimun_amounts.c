#include<stdio.h>
#include<math.h>

int main()
{
    int a[8]={500,100,50,20,10,5,2,1},m,temp,i;
    printf("enter the amount\n");
    scanf("%d",&m);
    temp=m;
    for ( i = 0; i < 8; i++)
    {
        printf("%d notes is : %d\n",a[i],temp/a[i]);
        temp=temp%a[i];
    }
    return 0;
    
}