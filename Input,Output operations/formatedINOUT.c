#include<stdio.h>
#include<ctype.h>

int main()
{
    int a,m=12345,n=98765,i,j;
    float b,y=98.7654;
    char ch,x='a',name[20]="anil kumar guptha";
    printf("enter a,b,c values\n");
    if (scanf("%d%f%c",&a,&b,&ch)==3)
    {
        printf("a=%d b=%f c=%c\n",a,b,ch);
    }
    else
    {
        printf("error\n");
    }
    printf("%d\n",m);
    printf("%10d\n",m);
    printf("%010d\n",m);
    printf("%5d\n",m);
    printf("%10d\n",n);
    printf("%10d\n",-n);

    printf("%c\n%3c\n%5c\n%3c\n%c\n",x,x,x,x,x);

    printf("%.4f\n",y);
    printf("%f\n",y);
    printf("%.2f\n",y);
    printf("%07.2f\n",y);
    printf("%*.*f\n",7,2,y);
    printf("%10.2e\n",y);
    printf("%12.4e\n",-y);
    printf("%e\n",y);
    
    printf("%s\n",name);
    printf("%20s\n",name);
    printf("%20.10s\n",name);
    printf("%.5s\n",name);
    printf("%.10s\n",name);
    printf("%5s\n",name);

   for ( i = 5; i >=1; i--)
   {
       for ( j =5-i; j >0 ; j--)
       {
           printf(" ");
       }
       for ( j = i; j >=1; j--)
       {
           printf("%d",j);
       }
       printf("\n");
   }
   
    return 0;
}