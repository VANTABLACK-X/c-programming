#include<stdio.h>

int main()
{
    int upper=0,lower=0;
    char ch[50];
    int i;
    printf("enter the string value\n");
    scanf("%s",&ch);
    i=0;
    while (ch[i]!=0)
    {
        if (ch[i]>='A'&&ch[i]<='Z')
        {
            upper++;
        }
        if (ch[i]>='a'&&ch[i]<='z')
       {
           lower++;
       }
       i++;
    }
    printf("caps :%d\n",upper);
    printf("small :%d\n",lower);
    return 0;
}