#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float temp,cel,far;
    printf("temperature   press 1 to convert to cel -> far or 2 to convert to far -> cel\n");
    scanf("%f %f",&temp,&n);
    if (n==1)
    {
        far=(float)((9*temp)/5)+32;
        cel=temp;
        printf("celsius :%f",cel);
        printf("fahrenheit :",far);
    }
    else
    {
        cel=(float)((temp-32)*5)/9;
        far=temp;
        printf("fahrenheit :%f",far);
        printf("celsius :%f",cel);
    }

    return 0;
}