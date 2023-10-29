 #include <stdio.h>

void shifttheelementtotheleft(int arr[],int n,int k){
    int j;
    for(int i=1;i<=k;i++){
        int temp=arr[n-1];
        for( j=n-1;j>=1;j--){
            arr[j]=arr[j-1];
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
    int k=1;
    shifttheelementtotheleft(arr,n,k);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

