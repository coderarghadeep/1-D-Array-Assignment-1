#include<stdio.h>
int sum(int a[],int n);
int main()
{
    int a[10],n,i,result;
    printf("enter the array elements");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=sum(a,n);
    printf("Sum of the elements: %d\n", result);
    return 0;
}
int sum(int a[],int n)
{
    int sum1=0,i;
    for(i=0;i<n;i++)
    {
    sum1+=a[i];
    }
    return sum1;
}