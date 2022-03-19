#define items 5
#define maxchar 20
#include<string.h>
#include<stdio.h>

void main()
{
    char str[items][maxchar],dummy[maxchar];
    int i=0,j=0;
    printf("enter %d strings\n",items);
    while (i<items)
    scanf("%s",str[i++]);
    for ( i = 1; i < items; i++)
    {
        for ( j = 1; j <=items-1; j++)
        {
            if (strcmp(str[j-1],str[j])>0)   /*it compare first charecter of both string using ASCI value */
            {
                strcpy(dummy,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],dummy);
            }
        }
    }
    printf("\n Alphabetical list\n");
    for ( i = 0; i < items; i++)
    {
        printf("%s\n",str[i]);
    }
}