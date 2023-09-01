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
    vector<vector<int>> largeGroupPositions(string s)
    {
        s += ' ';

        vector<vector<int>> ret;
        for (int left = 0, right = 0; right < s.length() - 1; right++)
        {
            if (s[right] != s[right + 1])
            {
                if (right - left + 1 >= 3)
                    ret.push_back(vector<int>{left, right});
                left = right + 1;
            }
        }

        return ret;
    }
};