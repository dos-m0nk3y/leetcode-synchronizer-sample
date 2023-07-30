class Solution
{
  public:
    string licenseKeyFormatting(string s, int k)
    {
        string key;
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--)
            if (s[i] != '-')
            {
                if (key.length() % (k + 1) == k)
                    key += '-';
                key += isdigit(s[i]) ? s[i] : toupper(s[i]);
            }

        reverse(key.begin(), key.end());
        return key;
    }
};