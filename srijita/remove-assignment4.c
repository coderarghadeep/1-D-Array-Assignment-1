#include<stdio.h>
void deletion(int a[],int *n,int pos);
int main()
{
    int a[100];
    int n,key,pos;
    printf("enter the array rlements: ");
    scanf("%d",&n);
    printf("enter the numbers: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position: ");
    scanf("%d",&pos);
    deletion(a,&n,pos);
    printf("Arraay elements are: ");
    for(int j=0;j<n;j++)
    {
        printf("%5d",a[j]);
    }
    return 0;
}
void deletion(int a[],int *n,int pos)
{
    for(int i=pos-1;i<*n;i++)
    {
        a[i]=a[i+1];
    }
    --*n;
}