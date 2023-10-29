#include<stdio.h>
int linear(int a[],int n,int key)
{
    int i;
    a[n]=key;
    for(i=0;a[i]!=key;i++)
    if(i==n)
    return -1;
    return i;
}

int main()
{
    int n,i,a[10],key,result=0;
     printf("enter the array elements=");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search=");
    scanf("%d",&key);
    result=linear(a,n,key);
    if(result==-1)
    printf("The element not found.");
    else
    printf("The element is found at %d position",result+1);
    return 0;
}
