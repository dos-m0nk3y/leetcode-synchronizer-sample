class Solution
{
  public:
    bool isIsomorphic(string s, string t)
    {
        char from[128], to[128];
        memset(from, -1, 128);
        memset(to, -1, 128);

        for (int i = 0; i < s.length(); i++)
        {
            if (from[s[i]] == -1 && to[t[i]] == -1)
            {
                from[s[i]] = t[i];
                to[t[i]] = s[i];
            }
            else if (from[s[i]] != t[i] || to[t[i]] != s[i])
                return false;
        }

        return true;
    }
};