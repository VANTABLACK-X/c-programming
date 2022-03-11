#include<stdio.h>
#include<math.h>

int main()
{
    int rool_no[3],marks[3][3],studenttotal[3],hightotal,topstd,topstd1,highsub,i,j;
    printf("enter the student roll_no and marks:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("enter roll number: ");
        scanf("%d",&rool_no[i]);
        for ( j= 0; j < 3; j++)
        {
            printf("subject %d = ",j+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        studenttotal[i]=0;
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            studenttotal[i]+=marks[i][j];
        }
        printf("Roll no %d total marks is = %d",rool_no[i],studenttotal[i]);
        printf("\n");
    }
    hightotal=studenttotal[0];
    for ( i = 0; i < 3; i++)
    {
        if(hightotal<=studenttotal[i])
        {
            hightotal=studenttotal[i];
            topstd=rool_no[i];
        }
    }
    printf("Roll no %d is the highest in total of all subject %d\n",topstd,hightotal);
    highsub=marks[i][j];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(highsub<=marks[j][i])
            {
                highsub=marks[j][i];
                topstd1=rool_no[j];
            }
        }
        printf("highest mark in sub %d is obtained by Roll no %d",i+1,topstd1);
        printf("\n");
    }
    return 0;
}