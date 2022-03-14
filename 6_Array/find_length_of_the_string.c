#include<stdio.h>

void main()
{
    int i;
    char string[]="programming is fun";  
    for ( i = 0; string[i] !='\0'; ++i);
    printf("length of the string is = %d",i);
  
}