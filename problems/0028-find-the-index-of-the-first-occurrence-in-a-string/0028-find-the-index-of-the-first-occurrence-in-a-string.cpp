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
    int strStr(string haystack, string needle)
    {
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
        while (left < haystack.length() && right < needle.length())
        {
            if (haystack[left] == needle[right])
            {
                left += 1;
                right += 1;
            }
            else if (right == 0)
                left += 1;
            else
                right = lps[right - 1];
        }

        return right == needle.length() ? left - needle.length() : -1;
    }
};