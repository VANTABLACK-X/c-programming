#include<string.h>
#include<stdio.h>

void main()
{
    char line[81],ctr;
    int i,c,words=0,characters=0,lines=0,end=0;
    printf("enter the lines of text:\n\n");
    while (end==0)
    {
        c=0;
        while ((ctr=getchar())!='\n')
        line[c++]=ctr;
        line[c]='\0';
        
        if (line[0]=='\0')
        break;
        else
        {
            words++;
            for ( i = 0;line[i]!='\0'; i++)
            if (line[i]==' '||line[i]=='\t')
            words++;
        }
        lines=lines+1;
        characters+=strlen(line);
    }
    printf("\n");
    printf("number of lines = %d\n",lines);
    printf("number of words = %d\n",words);
    printf("number of characters = %d",characters);
}