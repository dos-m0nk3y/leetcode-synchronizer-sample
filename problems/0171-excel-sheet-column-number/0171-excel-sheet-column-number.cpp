class Solution
{
  public:
    int titleToNumber(string columnTitle)
    {
        int ret = 0;
        long mul = 1;

        for (int i = columnTitle.length() - 1; i >= 0; i--)
        {
            ret += mul * (columnTitle[i] - 'A' + 1);
            mul *= 26;
        }

        return ret;
    }
};