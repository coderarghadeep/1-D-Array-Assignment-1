#include<stdio.h>
void removeduplicate(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i<n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for ( int k = j; k < n-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }   
        }
    }
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
    removeduplicate(arr, n);
    for ( int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}