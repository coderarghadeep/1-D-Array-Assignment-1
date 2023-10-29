#include <stdio.h>

void shifttheelementtotheright(int arr[],int n,int k){
    int j;
    for(int i=1;i<=k;i++){
        int temp=arr[0];
        for( j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }
}
int main()
{
    int n,i;
    printf("Enter the size of the elements ");
    scanf("%d",&n);
    printf("Enter the %d elements \n ",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=3;
    shifttheelementtotheright(arr,n,k);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

