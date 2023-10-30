#include <stdio.h>

void Missing(int array[], int size)
{
    int totalsize = size + 1;
    int totalsum = 0, arraysum = 0;
  
    for (int i = 0; i < totalsize; i++)
        totalsum += i;
  
    for (int i = 0; i < size; i++)
        arraysum += array[i];
  
    printf("The missing number is %d ", totalsum - arraysum);
}

int main()
{
    int array[] = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(array) / sizeof(array[0]);
  
    Missing(array, size);
  
    return 0;
}