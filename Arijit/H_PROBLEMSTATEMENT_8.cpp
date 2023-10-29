int linearSearch(int n, int num, vector<int> &arr)
{
    int i, ans = -1;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == num)
        {
            ans = i;
            break;
        }
    }
    return ans;
}