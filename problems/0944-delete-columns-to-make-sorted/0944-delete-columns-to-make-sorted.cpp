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
    int minDeletionSize(vector<string> &strs)
    {
        int ret = 0;
        for (int i = 0; i < strs[0].length(); i++)
            for (int j = 0; j < strs.size() - 1; j++)
                if (strs[j][i] > strs[j + 1][i])
                {
                    ret += 1;
                    break;
                }

        return ret;
    }
};