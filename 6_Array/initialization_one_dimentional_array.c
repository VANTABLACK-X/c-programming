#define maxval 25
#define COUNTER 11
#include<stdio.h>
#include<math.h>

int main()
{
    int i,low,high;
    int group[COUNTER]={0,0,0,0,0,0,0,0,0,0,0};
    float value[maxval];

    for (i = 0; i < maxval; i++)
    {
        scanf("%f",&value[i]);
        ++group[(int)(value[i])/10];
    }
    printf("\n");
    printf("GROUP   RANGE   FREQUENCY\n");
    for ( i = 0; i < COUNTER; i++)
    {
        low=i*10;
        if(i==100)
        {
           high=100;
        }
        else
        high=low+9;
        printf("%2d    %3d to %3d   %2d\n",i+1,low,high,group[i]);
    }
    return 0;
}