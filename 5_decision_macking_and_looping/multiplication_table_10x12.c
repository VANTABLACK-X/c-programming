#define column 12
#define rows 10
#include<stdio.h>
#include<math.h>

int main()
{
    int row,col,y;
    col=1;
    printf("                MULTIPLICATION TABLE \n");
    printf("_________________________________________________________\n");
    do
    {
        row=1;
        do
        {
            y=col*row;
            printf("%4d",y);
            row=row+1;
        } 
        while (row<=rows);
        printf("\n");
        col=col+1;

    } 
    while (col<=column);
    printf("_________________________________________________________");
    
}