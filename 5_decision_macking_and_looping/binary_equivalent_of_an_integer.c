#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,bin[10];
    printf("enter an  integer number :");
    scanf("%d",&num);
    printf("binary value for %d is :",num);
    
    for (i=0;num>0;i++)
    {
        bin[i]=num%2;
        num=num/2;  
    }
    for (i=i-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    return 0;
}