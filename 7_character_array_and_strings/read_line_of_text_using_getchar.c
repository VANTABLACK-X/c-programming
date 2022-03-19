#include<stdio.h>

int main()
{
    char line[80],ch;
    int c;
    c=0;
    printf("enter the line of text, press return key at end\n");
    do
    {
        /*getchar is only read one character,
          this do-while loop is keep read characters until u press enter key(return key)*/
        ch=getchar();
        line[c]=ch;
        c++;
    } while (ch!='\n');
    
    c=c-1;
    line[c]='\0';
    printf("\n%s\n",line);
    return 0;
}