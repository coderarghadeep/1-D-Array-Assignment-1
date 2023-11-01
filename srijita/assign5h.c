#include <stdio.h>
void left(int array[], int size) 
{
    int copy = array[0]; 
    for (int i = 0; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[size - 1] = copy;
}
int main() 
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    left(array, size);
    printf("Left rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}