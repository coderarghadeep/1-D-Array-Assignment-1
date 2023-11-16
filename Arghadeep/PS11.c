//Given a binary array nums,
//return the maximum number of consecutive 1's in the array.

//Example 2:
//Input: nums = [1,0,1,1,0,1]
//Output: 2



#include<stdio.h>
int main()
{
    int n;
    printf("nums = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &arr[i]);
    }
    
}