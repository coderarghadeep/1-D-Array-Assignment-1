#include<stdio.h>
int ispresent(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1; //present
        }
    }
    return 0; //absent
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
    int key,i;
    printf("key=");
    scanf("%d", &key);
    int result = ispresent(arr, n, key);
    if (result == 1)
    {
       for ( int i = 0; i < n; i++)
       {
        if (arr[i] == key)
        {
            break;
        }
       } 
        printf("%d is present at the %d position", key,i+1);
    }
    else
    {
        printf("0");
    }
    return 0;
}