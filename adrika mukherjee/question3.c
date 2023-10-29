
#include<stdio.h>
int isSorted(int array[], int n){
    int i;
    for(i=0; i < n-1; i++){
        if (array[i] > array[i+1]){
            printf("the array is not sorted in non-decreasing order.\n");
            return 0;
        }
    }
    printf("the array is sorted in non-decreasing order.\n");
}


int main(){
    int array[] = {6,9,1,8,6};
    int n = sizeof(array)/sizeof(array[0]);
    isSorted(array,n);

    return 0;
}