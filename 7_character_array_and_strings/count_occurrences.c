#include<stdio.h>
#include<string.h>

void main()
{
    char str[81],word[81];
    int i,j,count=0,sl,wl,temp,chk;
    printf("enter the string\n");
    gets(str);
    printf("enter the word\n");
    gets(word);
    sl=strlen(str);
    wl=strlen(word);
    for ( i = 0; i < sl; i++)
    {
        temp=i;
        for ( j = 0; j < wl; j++)
        {
            if (str[i]==word[j])
            i++;
        }
        chk=i-temp;
        if(chk==wl)
        count++;
        i=temp;
    }
    printf("targeted word found in this string is(occurrences) = %d",count);
}