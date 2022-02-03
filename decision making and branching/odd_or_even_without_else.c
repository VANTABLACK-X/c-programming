#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    char* ans[2]={"even","odd"};
    printf("enter the number to find its odd or even\n");
    scanf("%d",&n);
    printf("%s",ans[n%2]);
    return 0;
}