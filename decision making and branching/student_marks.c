#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int i,rollnum[5],marks[5];
    
   
    for ( i = 1; i <=4; i++)
    {
        printf("enter student roll number and marks 0-100\n");
        scanf("%d%d",&rollnum[i],&marks[i]);
    }
    
    for ( i = 1; i <=4; i++)
    {
        if (marks[i]>80&&marks[i]<100)
        {
            printf("%d have obtained more than 80 marks in the range 80-100\n",rollnum[i]);
        }
        else if (marks[i]>60&&marks[i]<80)
        {
            printf("%d have obtained more than 60 marks in the range 60-80\n",rollnum[i]);
        }
        else if(marks[i]>40&&marks[i]<60)
        {
            printf("%d have obtained more than 40 marks in the range 40-60\n",rollnum[i]);
        }
        else
        printf("%d have obtained 40 or less marks in the range 0-40\n",rollnum[i]);
    }
    return 0;
}