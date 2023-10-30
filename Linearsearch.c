
#include <stdio.h>

int linearsearch(int arr[], int n,int k) {
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==k){
           return i;
        }
        
    }
    return -1;
}

int main() {
    int n, i,k;
    printf("Enter the value of k: ");
    scanf("%d",&k);
    printf("Enter the size of the elements: ");
    scanf("%d", &n);
    printf("Enter the %d elements:\n", n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index=linearsearch(arr, n,k);
    if(index!=-1){
        printf("%d element found at %d index",k,index);
    }
        else{
        printf("%d element not found ",k);
        }
    return 0;
}

