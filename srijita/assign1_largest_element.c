#include <stdio.h>
int arraymax(int array[], int sizeofarray)
{
    int max=0;
    for(int i=0; i<sizeofarray; i++)
    {
    if(array[i]<max)
    {
       max= array[i];
    }
    }
    return max;
}

int main()
{ 
    int array1[]={25,96,49,16,55,45,65,70};
    int max= arraymax(array1, 8);
    printf("the maximum element in the array is %d",max);
    return 0;
}