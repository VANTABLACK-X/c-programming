#include<stdio.h>
#include<math.h>

void main()
{
    int m[5][6],s[5][6],c[6],
        mvalue[5][6],svalue[5][6],
        mweek[5],sweek[5],
        mproduct[6],sproduct[6],
        mtotal,stotal,number,i,j;
        /*input data*/
    printf("enter product manufactured week wise\n");
    for ( i = 1; i <=4; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            scanf("%4d",&m[i][j]);
        }
    }
    printf("enter product sold week wise\n");
    for ( i = 1; i <=4; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            scanf("%4d",&s[i][j]);
        }
    }
    printf("enter cost of each product\n");
    for ( i = 1; i <=5; i++)
    {
        scanf("%d",&c[i]);
    }
    /*value matrix of production and sale*/
    for ( i = 1; i <=4; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            mvalue[i][j]=m[i][j]*c[j];
            svalue[i][j]=s[i][j]*c[j];
        }
    }
    /*total value of weekly production and sale */
    for ( i = 1; i <=4; i++)
    {
        mweek[i]=0;
        sweek[i]=0;
        for ( j = 1; j <=5; j++)
        {
            mweek[i]+=mvalue[i][j];
            sweek[i]+=svalue[i][j];
        }
    }
    /*product wise monthly value of production and sales*/
    for ( j = 1; j <=4; j++)
    {
        mproduct[j]=0;
        sproduct[j]=0;
        for ( i = 1; i <=5; i++)
        {
            mproduct[j]+=mvalue[i][j];
            sproduct[j]+=svalue[i][j];
        }
    }
    /*grand total of production and sales*/
    mtotal=stotal=0;
    for ( i = 1; i <=4; i++)
    {
        mtotal+=mweek[i];
        stotal+=sweek[i];
    }
    printf("\n\n");
    printf("1.value matrix of production and sale\n");
    printf("2.total value of weekly production and sale\n");
    printf("3.product wise monthly value of production and sales\n");
    printf("4.grand total of production and sales\n");
    printf("5.exit\n");
    number=0;
    while (1)
    {
        printf("\nenter your choice :");
        scanf("%d",&number);
        printf("\n");
        if (number==5)
        {
            printf("GOOD BYE\n\n");
            break;
        }
        switch (number)
        {
        /*value matrix*/
        case 1:
            printf("\nVALUE MATRIX OF PRODUCTION\n\n");
            for ( i = 1; i <=4; i++)
            {
                printf("WEEK(%d)    ",i);
                for ( j = 1; j <=5; j++)
                {
                    printf("%7d",mvalue[i][j]);
                }
                printf("\n");
            }
            printf("\nVALUE MATIX OF SALES\n\n");
            for ( i = 1; i <=4; i++)
            {
                printf("WEEK(%d)    ",i);
                for ( j = 1; j <=5; j++)
                {
                    printf("%7d",svalue[i][j]);
                }
                printf("\n");
            }
            break;
        /*total weekly production and sales*/
        case 2:
            printf("\nTOTAL WEEKLY PRODUCTION AND SALES\n\n");
            printf("               PRODUCTION     SALES\n");
            printf("             ______________  ________   \n");
            for ( i = 1; i <=4; i++)
            {
                printf("\nweek(%d)        %7d   %7d",i,mweek[i],sweek[i]);
            }
            break;
        /*product wise total production and sale*/
        case 3:
            printf("\nPRODUCT WISE TOTAL PRODUCTION AND SALES\n");
            printf("                     PRODUCTION     SALES\n");
            printf("                   ______________  ________   \n");
            for ( j = 1; j <=5; j++)
            {
            printf("\nweek(%d)             %7d    %7d",j,mproduct[j],sproduct[j]);
            }
            break;
        /*grand totals*/
        case 4:
            printf("\nGRAND TOTAL OF PRODUCTION SALE\n");
            printf("Total production = %d\n",mtotal);
            printf("Total sales = %d\n",stotal);
            break;
        default: 
            printf("\nwrong choice! select again\n");
            break;
        }
    }
    printf("\nExit from the program\n");
     
}