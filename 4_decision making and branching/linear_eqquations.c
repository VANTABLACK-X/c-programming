#include<stdio.h>
#include<math.h>

/* m=ax1+bx2 , n=cx1+dx2*/

int main()
{
    float a,b,c,d,y,m,n;
    double x1,x2;
    printf("enter A B C D M N values\n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    y=((a*d)-(c*b));
   if (y!=0)
   {
       x1=((m*d)-(b*n))/y;
       x2=((n*a)-(m*c))/y;
       printf("x1= %.2lf M= %.0f\n",x1,((a*x1)+(b*x2)));
       printf("x2= %.2lf N= %.0f\n",x2,((c*x1)+(d*x2)));
   }
   return 0;
}