#define maxgirls 4
#define maxitems 3
#include<stdio.h>
#include<math.h>

int main()
{
    int value[maxgirls][maxitems];
    int girl_total[maxgirls],item_total[maxitems];
    int i,j,grand_total;

    printf("enter the items \n");
    for ( i = 0; i < maxgirls; i++)
    {
        girl_total[i]=0;
        for ( j = 0; j < maxitems; j++)
        {
            scanf("%d",&value[i][j]);
            girl_total[i]=girl_total[i]+value[i][j];
        }
    }
    for ( j = 0; j < maxitems; j++)
    {
        item_total[j]=0;
        for ( i = 0; i < maxgirls; i++)
        {
          item_total[j]=item_total[j]+value[i][j];
        } 
    }
    grand_total=0;
    for ( i = 0; i < maxgirls; i++)
    {
        grand_total=grand_total+girl_total[i];
    }
    
    printf("GIRLS TOTAL \n");
    for ( i = 0; i < maxgirls; i++)
    {
        printf("sales girl[%d] = %d\n",i+1,girl_total[i]);
    }
    printf("ITEMS TOTAL \n");
    for ( j = 0; j < maxitems; j++)
    {
        printf("item{%d] = %d\n",j+1,item_total[j]);
    }
    printf("grand total = %d",grand_total);
    return 0;   
}