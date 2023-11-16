#include<stdio.h>
int rotation(int *arr, int n)
{
int firstelement = arr[0];
for ( int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = firstelement;
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
    rotation(arr, n);
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}