#define loop 100
#define acuracy 0.0001
#include<stdio.h>
#include<math.h>               
                    
int main()                         /* 1/1-x=1 + x + x(power2)+.......x(power n)*/
{
  int i;
  float x,term,sum;
  printf("enter the number x\n");
  scanf("%f",&x);
  sum=0;
  for (term=1, i=1;i<=loop;++i)
    {
      sum=sum+term;
      if(term<=acuracy)
      goto output;
      term=term*x;
    }
  printf("result is not sufficiant\n");
  goto end;
  output:
  printf("EXIT FROM LOOP\n");
  printf("sum =%f\nno of terms =%d\n",sum,i);
  end:
  /*NULL statement*/
  ;
  return 0;
}