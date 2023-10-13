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
    int repeatedNTimes(vector<int> &nums)
    {
        bitset<10001> hashset;
        for (int num : nums)
        {
            if (hashset.test(num))
                return num;
            hashset.set(num);
        }

        return -1;
    }
};