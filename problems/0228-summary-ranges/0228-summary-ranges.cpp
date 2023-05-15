class Solution
{
  public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ret;
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = i;
            while (i < nums.size() - 1 && nums[i + 1] == nums[i] + 1)
                i++;

            if (nums[idx] == nums[i])
                ret.push_back(to_string(nums[idx]));
            else
                ret.push_back(to_string(nums[idx]) + "->" + to_string(nums[i]));
        }
        return ret;
    }
};