#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float cost,total_cost;
    printf("enter total cost you purchased\n");
    scanf("%f",&cost);
    printf("enter 1 if you purchased 'mill cloths'\nenter 2 if you purchased 'handloom cloths'\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        if (cost>0&&cost<=100)
        {
            total_cost=cost;
        }
        else if (cost>100&&cost<=200)
        {
            total_cost=cost-(5*cost)/100;
        }
        else if(cost>200&&cost<=300)
        {
            total_cost=cost-(7.5*cost)/100;
        }
        else
        {
            total_cost=cost-(10.0*cost)/100;
        }
        printf("total cost is %.0f",total_cost);
        break;    
    case 2:
         if (cost>0&&cost<=100)
        {
            total_cost=cost-(5*cost)/100;
        }
        else if (cost>100&&cost<=200)
        {
            total_cost=cost-(10,0*cost)/100;
        }
        else if(cost>200&&cost<=300)
        {
            total_cost=cost-(15.0*cost)/100;
        }
        else
        {
            total_cost=cost-(10.0*cost)/100;
        }
        printf("total cost is %.0f",total_cost);
        break;            
    default:
        printf("invalid option !");
        break;
    }
    return 0;
}