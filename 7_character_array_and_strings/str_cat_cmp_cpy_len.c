#include<stdio.h>
#include<string.h>

void main()
{
    char s1[30],s2[30],s3[30];
    int x,l1,l2,l3;
    printf("enter two string constants\n");
    scanf("%s%s",s1,s2);
    /*comparing s1 and s2*/
    x=strcmp(s1,s2);
    if(x!=0)
    {
      printf("strings are not equal\n");
      /*joinig s1 and s2,s1 will = s1+s2 and s2=s2*/
      strcat(s1,s2);
    }
    else
    printf("strings are equal\n");
    /*copying s1 to s3*/
    strcpy(s3,s1);
    /*finding length of the string*/
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    /*output*/
    printf("s1=%s\tlength=%d\n",s1,l1);
    printf("s2=%s\tlength=%d\n",s2,l2);
    printf("s3=%s\tlength=%d\n",s3,l3);
}