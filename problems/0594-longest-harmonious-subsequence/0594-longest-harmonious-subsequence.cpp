class Solution
{
  public:
    int findLHS(vector<int> &nums)
    {
        int ret = 0;
        sort(nums.begin(), nums.end());

        int left = 0, right = 0;
        while (right < nums.size())
        {
            if (nums[left] + 1 < nums[right])
                left += 1;
            else
            {
                if (nums[left] + 1 == nums[right])
                    ret = max(ret, right - left + 1);
                right += 1;
            }
        }

        return ret;
    }
};