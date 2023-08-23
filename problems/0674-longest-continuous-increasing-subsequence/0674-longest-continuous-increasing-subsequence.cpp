class Solution
{
  public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        nums.push_back(INT_MIN);

        int idx = 0, len = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                len = max(len, i - idx);
                idx = i;
            }
        }

        return len;
    }
};