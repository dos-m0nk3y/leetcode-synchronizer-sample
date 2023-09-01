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
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> ret(s.length(), INT_MAX);

        int left = 0, right = s.length() - 1;
        while (s[left] != c)
            left += 1;
        while (s[right] != c)
            right -= 1;

        for (int i = left; i < s.length(); i++)
            ret[i] = s[i] == c ? 0 : ret[i - 1] + 1;
        for (int i = right - 1; i >= 0; i--)
            ret[i] = min(ret[i], ret[i + 1] + 1);

        return ret;
    }
};