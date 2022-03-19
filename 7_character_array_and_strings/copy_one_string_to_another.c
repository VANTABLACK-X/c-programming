#include<stdio.h>

int main()
{
    /*u cant do like this 
      str1="programming";
      str2=str1;*/
    char str1[80],str2[80];
    int i;
    printf("enter the string\n");
    scanf("%s",str1);
    for ( i = 0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("\n%s",str2);
    printf("\nnumber of char = %d",i);
    return 0;
}