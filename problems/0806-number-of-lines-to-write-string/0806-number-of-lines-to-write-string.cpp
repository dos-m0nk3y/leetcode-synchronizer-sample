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
    vector<int> numberOfLines(vector<int> &widths, string s)
    {
        vector<int> ret = {1, 0};
        for (char &ch : s)
        {
            if (ret[1] + widths[ch - 'a'] > 100)
            {
                ret[0] += 1;
                ret[1] = 0;
            }
            ret[1] += widths[ch - 'a'];
        }

        return ret;
    }
};