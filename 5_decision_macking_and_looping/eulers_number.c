#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double term=1.0,sum=1.0;
    n=1;
    while (term>=0.00001)
    { 
       term=term/n;
       sum=sum+term;
       n++;
    }
    printf("the value of E is :%lf",sum);
    return 0;
}