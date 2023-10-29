#include<stdio.h>

int returnMax(int array[], int n){
    int max=0;
    for( int i=0; i < n; i++)
    {
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1, 2, 3, 66, 99,654};
    int max= returnMax( arr, 6);
    printf("the maximum element  in this array is %d", max);
    
    return 0;
}