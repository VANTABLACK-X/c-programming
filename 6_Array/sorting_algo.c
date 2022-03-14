#include<stdio.h>

void main()
{
    int i,j,arr[200],min,pos,size;
    printf("hoe many elements are you gfoing to enter in this array:\n");
    scanf("%d",&size);
    printf("enter the elements in the array:\n");
    for ( i = 1; i <=size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <=size-1; i++)
    {
        min=arr[i];
        pos=i;
        for ( j = i+1; j <=size; j++)
        {
            if (arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=min;
    }
    for ( i = 1; i <=size; i++)
    {
        printf("%3d",arr[i]);
    }
}