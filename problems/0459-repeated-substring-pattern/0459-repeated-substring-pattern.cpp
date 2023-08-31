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
    bool repeatedSubstringPattern(string s)
    {
        string needle = s;
        s = s.substr(1, -1) + s.substr(0, s.length() - 1);

        vector<int> lps(needle.length(), 0);
        for (int i = 1; i < needle.length(); i++)
            do
            {
                lps[i] = lps[i] == 0 ? lps[i - 1] : lps[lps[i] - 1];
                if (needle[i] == needle[lps[i]])
                {
                    lps[i] += 1;
                    break;
                }
            } while (lps[i]);

        int left = 0, right = 0;
        while (left < s.length() && right < needle.length())
        {
            if (s[left] == needle[right])
            {
                left += 1;
                right += 1;
            }
            else if (right == 0)
                left += 1;
            else
                right = lps[right - 1];
        }

        return right == needle.length();
    }
};