#include<stdio.h>
int linear(int array[],int size,int search)
{
    array[size]=search;
    for(int i=0; array[i]!=search;i++)
    if(i==size)
    return -1;
    return i;
}
int main()
{
    int size,i,array[10],search,result=0;
     printf("enter the array elements=");
    scanf("%d",&size);
    printf("enter the numbers");
    for(i=0;i<size;i++)
    {
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search=");
    scanf("%d",&search);
    result=linear(array,size,search);
    if(result==-1)
    printf("The element is not found.");
    else
    printf("The element is found at %d position",result+1);
    return 0;
}