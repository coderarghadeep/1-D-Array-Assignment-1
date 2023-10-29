#include <stdio.h>

void tofindmissingvalue(int arr[], int size)
{
    int totalsize = size + 1;
    int totalsum = 0, arrsum = 0;
  
    for (int i = 0; i < totalsize; i++)
        totalsum += i;
  
    for (int i = 0; i < size; i++)
        arrsum += arr[i];
  
    printf("The missing number is %d ", totalsum - arrsum);
}

int main()
{
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
  
tofindmissingvalue(arr, size);
  
    return 0;
}