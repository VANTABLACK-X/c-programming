#include<stdio.h>
#include<math.h>

int main()
{
    int dd,mm,yy;
    printf("enter date and month and year\n");
    scanf("%d%d%d",&dd,&mm,&yy);
    if (yy>=1900&&yy<=9999)
    {
        if (mm>=1&&mm<=12)
        {
            if ((dd>=1&&dd<=31)&&(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
            {
                printf("date is valid");
            }
            else if((dd>=1&&dd<=30)&&(mm==4||mm==6||mm==9||mm==11))
            {
                printf("date is valid");
            }
            else if((dd>=1&&dd<=28)&&(mm==2))
            {
                printf("date is valid");
            }
            else
            {
                printf("date is not valid");
            }
        }
        else
        {
            printf("month is not valid");
        }    
    }
    else
    {
        printf("year is not valid");
    }
    return 0;
}