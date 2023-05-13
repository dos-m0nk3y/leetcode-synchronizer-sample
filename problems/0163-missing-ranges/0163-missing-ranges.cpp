class Solution
{
  public:
    vector<vector<int>> findMissingRanges(vector<int> &nums, int lower, int upper)
    {
        if (nums.empty() || lower < nums.front())
            nums.insert(nums.begin(), lower - 1);
        if (nums.back() < upper)
            nums.push_back(upper + 1);

        vector<vector<int>> ret;
        for (int i = 0; i < nums.size() - 1; i++)
            if (nums[i] + 1 <= nums[i + 1] - 1)
            {
                vector<int> num = {nums[i] + 1, nums[i + 1] - 1};
                ret.push_back(num);
            }

        return ret;
    }
};