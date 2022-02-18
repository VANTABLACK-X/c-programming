#define ROWS 5
#define COLUMN 5
#include<stdio.h>
#include<math.h>

int main()
{
   int row,column,product[ROWS][COLUMN];
   int i,j;
   
   printf("      MULTIPLICATION TABLE\n");
   printf("    ");
   for (i = 1; i <=COLUMN; i++)
   {
       printf("%4d",i);
   }
   printf("\n");
   printf("_____________________________\n");
   for ( i = 0; i <ROWS; i++)
   {
       row=i+1;
       printf("%2d |",row);
       for ( j = 1; j <=COLUMN; j++)
       {
           column=j;
           product[i][j]=row*column;
           printf("%4d",product[i][j]);
       }
       printf("\n");
   }
   return 0;
}