#include<stdio.h>

int main()
{
    char letter;
    printf("enter the letter :");
    scanf("%c",&letter);
    if (letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
    {
        printf("%c letter is a vowel",letter);
    }
    else
    {
        printf("%c letter is a consonent",letter);
    }
    return 0;
}