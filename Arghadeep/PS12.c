//Given a non-empty array of integers nums,
//every element appears twice except for one. Find that single one.

//Example 2:
//Input: nums = [4,1,2,1,2]
//Output: 4


#include<stdio.h>
int main()
{
    int n;
    printf("num = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &arr[i]);
    }

}