class Solution
{
  public:
    int romanToInt(string s)
    {
        int ret = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
                ret += 1;
            else if (s[i] == 'V')
                ret += (ret % 5 == 0) ? 5 : 3;
            else if (s[i] == 'X')
                ret += (ret % 10 == 0) ? 10 : 8;
            else if (s[i] == 'L')
                ret += (ret % 50 == 0) ? 50 : 30;
            else if (s[i] == 'C')
                ret += (ret % 100 == 0) ? 100 : 80;
            else if (s[i] == 'D')
                ret += (ret % 500 == 0) ? 500 : 300;
            else if (s[i] == 'M')
                ret += (ret % 1000 == 0) ? 1000 : 800;
        }
        return ret;
    }
};