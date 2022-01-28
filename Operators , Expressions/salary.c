#define Base_salary 1500.00
#define Bonus 200.00
#define Commision 0.2

#include<stdio.h>
#include<math.h>

/* g= bs+(bo*qua)+(com*qua*pri), bo=bo*qua, com=com*qua*pri  */

int main()
{
   int quantity;
   float gross_salary,bonus,commision,price;
   printf("enter the price and quantity of the item :");
   scanf("%f %d",&price,&quantity);

   bonus=Bonus*quantity;
   commision=Commision*quantity*price;
   gross_salary=Base_salary+bonus+commision;

   printf("bonus = %f\ncommision = %f\ngross salary = %f",bonus,commision,gross_salary);
   return 0;
}