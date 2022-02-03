#include<stdio.h>
#include<math.h>

int main()
{
    int maths,physics,chemistry,rollnum,total;
    
    printf("enter roll number :\n");
    scanf("%d",&rollnum);
    printf("maths :");
    scanf("%d",&maths);
    printf("physics :");
    scanf("%d",&physics);
    printf("chemistry :");
    scanf("%d",&chemistry);

    total=maths+physics+chemistry;
    if(((maths>=60&&physics>=50)&&(chemistry>=40&&total>=200))||(maths+physics>=150))
    {
      printf("no :%d is eligible for this course",rollnum);
    }
    else
    printf("no :%d is not eligible",rollnum);
    return 0;
}