#include<stdio.h>
void mergeArr(int a[],int b[],int mergeArrays[],int *n,int *m);
int main()
{
    int a[10],b[10],n,m,i,j;
    printf("Enter the array elements: ");
    scanf("%d",&n);
    printf("enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array elements:");
    scanf("%d",&m);
    printf("enter the elements: ");
    for(j=0;j<n;j++)
     scanf("%d",&b[j]);
    int mergeArrays[n+m];
    mergeArr(a,b,mergeArrays,&n,&m);
    printf("after merging:");
    for(i=0;i<n+m;i++)
    printf("%d ",mergeArrays[i]);
    printf("\n");
    return 0;
}
void mergeArr(int a[],int b[],int mergeArrays[],int *n,int *m)
{
    int i=0,j=0,k=0;
    while(i<*n&&j<*m){
        if(a[i]<b[j]){
        mergeArrays[k++]=a[i++];
        }
        else{
        mergeArrays[k++]=b[j++];
        }
    }
    while(i<*n){
        mergeArrays[k++]=a[i++];
    }
    while(j<*m){
        mergeArrays[k++]=b[j++];
    }
}
