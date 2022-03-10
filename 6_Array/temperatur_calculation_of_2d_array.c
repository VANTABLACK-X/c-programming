#include<stdio.h>
#include<math.h>

int main()
{
    int temperature[3][3],city,city1,min_tem,max_tem,i,j;
    for ( i = 0; i < 3; i++)
    {
        printf("enter day %d city temperature\n",i+1);
        for ( j = 0; j < 3; j++)
        {
            printf("city %d = ",j+1);
            scanf("%d",&temperature[i][j]);
        }
        printf("\n");
    }
    printf("matix form of city temperature during the day\n");
    printf("DAY  CITY 1  CITY 2  CITY 3\n");
    printf("______________________________________________________________________\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%d   ",i+1);
        for ( j = 0; j < 3; j++)
        {
            printf("%6d",temperature[i][j]);
        }
        printf("\n");
    }
    printf("______________________________________________________________________\n");
    
    min_tem=max_tem=temperature[0][0];
    for ( i = 0; i < 3; i++)
    {
        city=city1=0;
        printf("day %d\n",i+1);
        for ( j = 0; j < 3; j++)
        {
            if(min_tem>=temperature[i][j])
            {
               min_tem=temperature[i][j];
               city=j+1;
            }
            if (max_tem<=temperature[i][j])
            {
                max_tem=temperature[i][j];
                city1=j+1;
            } 
        }
        printf("min_tem = %d in city %d\n",min_tem,city);
        printf("max_tem = %d in city %d\n",max_tem,city1);
        printf("\n");
    }
    return 0;
}