#include<stdio.h>
#include<math.h>

int main()
{
    int driven,gas,mileage;
    printf("enter the distance driven by the car: ");
    scanf("%d",&driven);
    printf("enter how much gas it tackes: ");
    scanf("%d",&gas);
    mileage=driven/gas;
    printf("your car mileage is : %d",mileage);
    return 0;
}