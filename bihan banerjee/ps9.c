#include<stdio.h>
void merge(int array[],int array1[],int mergearr[],int *a,int *b)
{
    int i=0,j=0,k=0;
    while(i<*a&&j<*b){
        if(array[i]<array1[j]){
        mergearr[k++]=array[i++];
        }
        else{
        mergearr[k++]=array1[j++];
        }
    }
    while(i<*a){
        mergearr[k++]=array[i++];
    }
    while(j<*b){
        mergearr[k++]=array1[j++];
    }
}
int main()
{
    int array[10],array1[10],a,b,i,j;
    printf("Enter the array elements: ");
    scanf("%d",&a);
    printf("enter the numbers: ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the second array elements:");
    scanf("%d",&b);
    printf("enter the elements: ");
    for(j=0;j<a;j++)
     scanf("%d",&array1[j]);
    int mergearr[a+b];
    mergeArr(array,array1,mergearr,&a,&b);
    printf("after merge is done:");
    for(i=0;i<a+b;i++)
    printf("%d ",mergearr[i]);
     return 0;
}