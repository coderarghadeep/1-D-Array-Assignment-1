#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    int maxElement, i;
    maxElement = arr[0];
    for (i = 0; i < n; i++)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
