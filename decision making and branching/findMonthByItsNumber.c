#include<stdio.h>
#include<stdlib.h>  /*standard library has memory allocation, process control, conversions*/

int main()
{
    /*using switch*/

    int month,i;  
    char months[14][20]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
    printf("1.enter number of the month :\n");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("jan");
        break;
    case 2:
        printf("feb");
        break;
    case 3:
        printf("mar");
        break;
    case 4:
        printf("apr");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("jun");
        break;
    case 7:
        printf("jul");
        break;
    case 8:
        printf("aug");
        break;
    case 9:
        printf("sep");
        break;
    case 10:
        printf("oct");
        break;
    case 11:
        printf("nov");
        break;
    case 12:
        printf("dec");
        break;        
    default:
    printf("invalid number");
        break;
    }
    /* using array*/
    printf("\n\n");
    printf("2.enter no of the month:\n");
    scanf("%d",&i);
    if (i>=1&&i<=12)
    {
        printf("%s",months[i-1]);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}