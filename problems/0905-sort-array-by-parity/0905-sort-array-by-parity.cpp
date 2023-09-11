static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            if (nums[left] % 2 == 0)
                left += 1;
            else if (nums[right] % 2)
                right -= 1;
            else
                swap(nums[left++], nums[right--]);
        }

        return nums;
    }
};