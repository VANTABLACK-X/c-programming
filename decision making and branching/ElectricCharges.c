#include<stdio.h>
#include<math.h>

int main()
{
    int units,customer_num;
    float rate_of_charges;
    printf("enter customer number and values of units \n");
    scanf("%d%d",&customer_num,&units);
    
    if (units<=200)
       rate_of_charges=0.50*units;
    else if(units<=400)
       rate_of_charges=100+0.65*(units-200);
    else if(units<=600)
       rate_of_charges=230+1.00*(units-400);
    else
       rate_of_charges=390+1.00*(units-600);
    printf("customer number = %d charges = %f",customer_num,rate_of_charges);
    return 0; 
}