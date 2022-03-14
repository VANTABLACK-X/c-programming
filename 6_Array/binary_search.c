#include<stdio.h>

void main()
{
    int arr[50],size,key,i,top,bottom,middle;
    printf("how many numbers going to enter \n");
    scanf("%d",&size);
    printf("enter %d numbers\n",size);
    for ( i = 1; i <=size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number want to search\n");
    scanf("%d",&key);
    top=size-1;
    bottom=0;
    do
    {
        middle=(top+bottom)/2;
        if (arr[middle]<key)
        {
            bottom=middle+1;
        }
        else
        top=middle;
    } while (top>bottom);
    if (top==-1)printf("list is empty\n");
    else if(arr[top]==key)printf("number has been found!\n");
    else printf("target number has not found\n");
    
}