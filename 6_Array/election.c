#include<stdio.h>
#include<math.h>

void main()
{
    int i,candidate[6],candidate_no;
    char ch;
    for ( i = 0; i < 6; i++)
    {
        candidate[i]=0;
    }
    printf("enter 0 if not intrested\n");
    do
    {
        printf("\nenter the candidate number to vote :");
        scanf("%d",&candidate_no);
        switch (candidate_no)
        {
        case 1:candidate[1]++;
            break;
        case 2:candidate[2]++;
            break;
        case 3:candidate[3]++;
            break;
        case 4:candidate[4]++;
            break;
        case 5:candidate[5]++;
            break;
        default:candidate[0]++;
            break;
        }
        printf("\nwant to vote again? press y\nOR press n to end election : ");
        scanf("%s",&ch);
    } while (ch=='y');
    for ( i = 1; i < 6; i++)
    {
        printf("total votes for candidate %d is = %d\n",i,candidate[i]);
    }
    printf("not intrested peoples are = %d",candidate[0]);
    
}