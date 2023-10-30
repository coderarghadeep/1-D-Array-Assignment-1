#include <stdio.h>
int Number(int array[], int Size) {
    int result = 0;
    
    for (int i = 0; i < Size; i++) {
        result ^= array[i];
    }
    
    return result;
}

int main() {
    int array[] = {3,1,1};
    int a = sizeof(array) / sizeof(array[0]);

    printf("the array is: %d",Number(array, a));

    return 0;
}