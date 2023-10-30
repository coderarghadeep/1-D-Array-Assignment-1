#include <stdio.h>


int tofindconsecutiveones(int arr[], int n)
{
    int maximumcount = 0; 
    int count = 0;    


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    else{
        count == 0;
    }
        


        
        if (count > maximumcount)
        {
            maximumcount = count;
        }
    }

    return maximumcount;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximumcount = tofindconsecutiveones(arr, n);

    printf("The maximum length of consecutive 1's in the binary array is %d", maximumcount);

    return 0;
}