class Solution
{
  public:
    int countSegments(string s)
    {
        int ret = 0;

        s = ' ' + s;
        for (int i = 0; i < s.length() - 1; i++)
            if (s[i + 1] != ' ' && s[i] == ' ')
                ret += 1;

        return ret;
    }
};