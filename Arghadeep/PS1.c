#include<stdio.h>
int largestelement(int *arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &arr[i]);
    }
    int largest = largestelement(arr, n);
    printf("%d", largest);
    return 0;
}