#include <stdio.h>
int findones(int array[], int size)
{
    int count1 = 0; 
    int count = 0;    

    for (int i = 0; i < size; i++)
    {

        if (array[i] == 1)
        {
            count++;
        }
        else 
        {
            count = 0;
        }

        if (count > count1)
        {
            count1 = count;
        }
    }

    return count1;
}

int main()
{
    int array[] = {1,1,1,1,0,0,0,1,1,1,1,1,1,0};
    int size = sizeof(array) / sizeof(array[0]);

    int maxone = findones(array, size)

    printf("The maximum number of 1's are %d", maxone);

    return 0;
}