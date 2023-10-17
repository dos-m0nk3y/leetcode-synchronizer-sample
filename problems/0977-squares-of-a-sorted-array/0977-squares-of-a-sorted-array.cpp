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
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ret(nums.size());

        int left = 0, right = nums.size() - 1;
        for (int i = nums.size(); i > 0; i--)
        {
            int square;
            if (abs(nums[left]) < abs(nums[right]))
                square = nums[right--];
            else
                square = nums[left++];

            ret[i - 1] = square * square;
        }

        return ret;
    }
};