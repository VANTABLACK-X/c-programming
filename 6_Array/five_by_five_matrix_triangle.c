#include<stdio.h>
#include<math.h>

void main()
{
    /*top left triangle with 1
      bottum right triangle with -1
      right to left diagonal with 0*/
    int a[10][10],i,j;
    printf("this is a 5x5 marix\n");
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (i+j<=5)
            {
                a[i][j]=1;
            }
            else if (i+j>=7)
            {
                a[i][j]=-1;
            }
            else
            {
                a[i][j]=0;
            }
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    
}