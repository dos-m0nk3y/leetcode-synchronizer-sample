class Solution
{
  public:
    int singleNumber(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int ret = 0;
        for (int num : nums)
            ret ^= num;

        return ret;
    }
};