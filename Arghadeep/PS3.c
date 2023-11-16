#include<stdio.h>
int issorted(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            return 0; //unsorted
        }
    }
    return 1; //sorted
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
    int result = issorted(arr, n);
    if (result == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}