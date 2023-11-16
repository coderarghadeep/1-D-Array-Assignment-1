#include<stdio.h>
int rotate(int *arr, int n, int k)
{
    k = k%n;

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
    int k;
    printf("k = ");
    scanf("%d", &k);
    rotate(arr, n, k);
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}