#define first 360
#define second 240
#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,students,rollnum,sub,marks,total;
    printf("enter the number of students and subjects\n");
    scanf("%d%d",&students,&sub);
    printf("\n");

    for (i=1;i<=students;i++)
    {
        total=0;
        printf("enter student roll number \n");
        scanf("%d",&rollnum);
        printf("enter the marks in %d subjects for roll number %d\n",sub,rollnum);
        for (j=1;j<=sub;j++)
        {
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("total marks =%d",total);
        if (total>=first)
        {
            printf("(FIRS DIVISION)\n");
        }
        else if (total>=second)
        {
            printf("(SECOND DIVISION)\n");
        }
        else
        {
            printf(" ----FAIL----\n");
        }
        
    }
    
}