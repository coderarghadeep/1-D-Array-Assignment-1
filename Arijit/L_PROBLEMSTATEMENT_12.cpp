class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = nums[0], i;
        for (i = 1; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};