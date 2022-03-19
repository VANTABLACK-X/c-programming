#include<stdio.h>
#include<string.h>

void main()
{
    char str[20];
    int vowel=0,con=0,i=0;
    printf("enter the string\n");
    gets(str);
    while (str[i]!='\0')
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else
        {
            con++;
        }
        i++;
    }
    printf("\nnumber of vowels = %d",vowel);
    printf("\nnumber of consonants = %d",con);
}