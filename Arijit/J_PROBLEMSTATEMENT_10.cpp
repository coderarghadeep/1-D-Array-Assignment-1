class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int miss, i;
        for (i = 0; i < nums.size(); i++)
        {

            if (nums[i] != i)
            {
                miss = i;
            }
        }
        return miss;
    }
};