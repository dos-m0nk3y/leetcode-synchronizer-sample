class Solution
{
  public:
    string reverseStr(string s, int k)
    {
        int len = s.length();
        for (int i = 0; i < len; i += 2 * k)
        {
            k = min(k, len - i);
            reverse(s.begin() + i, s.begin() + i + k);
        }

        return s;
    }
};