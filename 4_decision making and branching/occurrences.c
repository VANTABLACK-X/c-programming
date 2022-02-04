#define base 10 
#include<stdio.h>
#include<math.h>

int main()
{
    long int n,number;
    int i,last_digite;
    int freq[base];

    printf("enter the number\n");
    scanf("%d",&number);

    for ( i = 0; i <base; i++)
    {
        freq[i]=0;
    }
    n=number;
    while (n!=0)
    {
        last_digite=n%10;
        n/=10;
        freq[last_digite]++;
    }
    for ( i = 0; i <base; i++)
    {
        printf("frequency of %d is %d\n",i,freq[i]);
    }
    return 0;
}