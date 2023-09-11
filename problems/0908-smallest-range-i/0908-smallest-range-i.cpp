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
    int smallestRangeI(vector<int> &nums, int k)
    {
        int diff = *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());
        return max(0, diff - 2 * k);
    }
};