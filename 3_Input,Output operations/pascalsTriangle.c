#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,rows,coef,space;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
       for ( space = 0; space < rows-i; space++)
       {
        printf("  ");
       }
      for ( j = 0; j <=i; j++)
      {
        if (i==0||j==0)
        {
            coef=1;
        }
        else
        {
            coef=coef*(i-j+1)/j;
        }
        printf("%4d",coef);
      }
      printf("\n");
    }
    return 0;
}