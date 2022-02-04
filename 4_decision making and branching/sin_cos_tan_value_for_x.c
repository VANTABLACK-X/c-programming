#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    char t;
    int x;
    float ans;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("press s or S for sin value\npress c or C for cos value\npress t or T for tan value\n");
    scanf("%s",&t);

    if(isupper(t))
    {
        t=tolower(t);
    }

    switch (t)                                  /* using switch*/
    {
    case 's':
        ans=sin(x);
        printf("sin of %d is %.4f\n",x,ans);
        break;
    case 'c':
        ans=cos(x);
        printf("cos of %d is %.4f\n",x,ans);
        break;
    case 't':
        ans=tan(x);
        printf("tan 0f %d is %.4f\n",x,ans);
        break;
    default:
        printf("invalid option\n");
        break;
    }
    printf("\n");                                /* using if else*/
    if (t=='s')
    {
        ans=sin(x);
        printf("sin of %d is %.4f\n",x,ans);
    }
    else if (t=='c')
    {
        ans=cos(x);
        printf("cos of %d is %.4f\n",x,ans);
    }
    else if (t=='t')
    {
        ans=tan(x);
        printf("tan 0f %d is %.4f\n",x,ans);
    }
    else
    {
        printf("invalid option !\n");
    }
    
    return 0;
}