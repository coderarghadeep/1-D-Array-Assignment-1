//Given an array nums containing n distinct numbers in the range [0, n],
//return the only number in the range that is missing from the array.

//Example 3:
//Input: nums = [9,6,4,2,3,5,7,0,1]
//Output: 8
//Explanation: n = 9 since there are 9 numbers, so all numbers are in the 
//range [0,9]. 8 is the missing number in the range since it does not appear
//in nums.


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