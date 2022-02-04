#include<stdio.h>
#include<math.h>

int main()
{
    int mark,index;
    char grade;
    printf("enter total marks\n");
    scanf("%d",&mark);
    index=mark/10;

    switch (index)
    {
    case 9:
        grade='O';
        break;
    case 8:
        grade='A';
        break;
    case 7:
        grade='B';
        break;
    case 6:
        grade='C';
        break;
    case 5:
        grade='D';
        break;
    default:
        grade='F';
        break;
    }
    printf("grade in this subject is : %c",grade);
    return 0;
}