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
    int binaryGap(int n)
    {
        int ret = 0;
        for (int left = INT_MAX, right = 0; n > 0; right++)
        {
            if (n & 1)
            {
                ret = max(ret, right - left);
                left = right;
            }
            n >>= 1;
        }

        return ret;
    }
};