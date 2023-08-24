class Solution
{
  public:
    int countBinarySubstrings(string s)
    {
        char bit = s.front();
        int prev = 0, cur = 0;

        int ret = 0;
        for (char ch : s)
        {
            if (ch != bit)
            {
                ret += min(prev, cur);
                bit = ch;
                prev = cur;
                cur = 0;
            }
            cur += 1;
        }

        return ret + min(prev, cur);
    }
};