#define max_loan 50000
#include<stdio.h>
#include<math.h>

int main()
{
    long int loan1,loan2,loan3,sancloan,sum;
    printf("enter previous loans\n");
    scanf("%d%d",&loan1,&loan2);
    printf("new loan\n");
    scanf("%d",&loan3);

    sum=loan2+loan3;
    sancloan=(loan1>0)?0:((sum>max_loan)?max_loan-loan2:loan3);
    printf("pending loans : %d %d\n",loan1,loan2);
    printf("reqested loan : %d\n",loan3);
    printf("sanctioned loan : %d\n",sancloan);
    return 0;
}