#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,rows,space;
   printf("enter the number of rows :");
   scanf("%d",&rows);

    for (i=0;i<=rows;i++)
    {
      for (space=0;space<=rows-i;space++)
      {
       printf("  ");
      }
      for (j=0+i;j>0;j--)
      {
        printf("%2d",j);
      }
      
      for (j=0;j<=0+i;j++)
      {
        printf("%2d",j);
      }
      
      printf("\n");
    }
    return 0;
}    