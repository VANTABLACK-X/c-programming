#define ca1 1000
#define ca2 750
#define ca3 500
#define ca4 250
#define ea1 500
#define ea2 200
#define ea3 100
#define ea4 0
#include<stdio.h>
#include<math.h>

int main()
{
    int level,job_num;
    float gross_salary,net_salary,perks,basic_pay,house_rent,income_tax;

    input:
    printf("enter the level number 1-4 and enter 0 to end the program\n");
    scanf("%d",&level);
    if(level==0)
    goto stop;
    printf("enter job number and basic pay\n");
    scanf("%d%f",&job_num,&basic_pay);
    
    switch (level)
    {
    case 1:
        perks=ca1+ea1;
        break;
    case 2:
        perks=ca2+ea2;
        break;
    case 3:
        perks=ca3+ea3;
        break;
    case 4:
        perks=ca4+ea4;
        break;
    default:
        printf("invalid level, so enter valid level\n");
        goto stop;
        break;
    }
    house_rent=0.25*basic_pay;
    gross_salary=basic_pay+house_rent+perks;

    if(gross_salary<=2000)
       income_tax=0;
    else if(gross_salary<=4000)
            income_tax=0.03*gross_salary;
    else if(gross_salary<=5000)
            income_tax=0.05*gross_salary;
    else
       income_tax=0.08*gross_salary;
    net_salary=gross_salary-income_tax;
    printf("%d %d %.2f\n",level,job_num,net_salary);
    goto input;
    stop:
    printf("emd of the program\n");
    return 0;
}