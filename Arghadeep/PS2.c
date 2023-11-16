#include<stdio.h>
void secondlargestsecondsmallest(int *arr, int n, int *firstlargest, int *secondlargest, int *firstsmallest, int *secondsmallest)
{
    *firstlargest = arr[0];
    *secondlargest = arr[0];
    *firstsmallest = arr[0];
    *secondsmallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *firstlargest)
        {
            *secondlargest = *firstlargest;
            *firstlargest = arr[i];
        }
        if (arr[i] < *firstsmallest)
        {
            *secondsmallest = *firstsmallest;
            *firstsmallest = arr[i];
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
    int secondlargest, secondsmallest;
    secondlargestsecondsmallest(arr, n, &secondlargest, &secondsmallest);
    printf("%d %d", secondlargest, secondsmallest);
    return 0;
}