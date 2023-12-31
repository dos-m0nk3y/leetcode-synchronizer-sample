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
    int pivotIndex(vector<int> &nums)
    {
        int lsum = 0;
        int rsum = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            rsum -= nums[i];
            if (lsum == rsum)
                return i;
            lsum += nums[i];
        }

        return -1;
    }
};