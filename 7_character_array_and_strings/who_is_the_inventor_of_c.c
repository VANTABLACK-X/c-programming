#include<stdio.h>
#include<string.h>

void main()
{
    char ans[30]="dennis ritchie",res[30];
    int i;
    printf("who is the inventor of C ?\n");
    for ( i = 1; i <=3; i++)
    {
        gets(res);
        printf("\n");
        if(strcmp(res,ans)!=0)
        printf("try again!\n");
        else
        {
            printf("Good!\n");
            break;
        }
    }
    if(i==4)
    printf("answer is : %s",ans);
    
}