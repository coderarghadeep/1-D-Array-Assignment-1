#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    int i, temp;
    for (i = 0; i < n - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    return arr;
}