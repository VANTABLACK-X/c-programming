#include<stdio.h>
#include<math.h>

int main()
{
    int amount,total;
    printf("enter the amount : ");
    scanf("%d",&amount);
    total=amount/2000;
    printf("amount has %d x 2000\n",total);
    amount=amount-(total*2000);
    total=amount/500;
    printf("amount has %d x 500\n",total);
    amount=amount-(total*500);
    total=amount/200;
    printf("amount has %d x 200\n",total);
    amount=amount-(total*200);
    total=amount/100;
    printf("amount has %d x 100\n",total);
    amount=amount-(total*100);
    total=amount/50;
    printf("amount has %d x 50\n",total);
    amount=amount-(total*50);
    total=amount/20;
    printf("amount has %d x 20\n",total);
    amount=amount-(total*20);
    total=amount/10;
    printf("amount has %d x 10\n",total);

    return 0;
}