class Solution
{
  public:
    string convertToTitle(int columnNumber)
    {
        string ret;
        do
        {
            ret = (char)('A' + --columnNumber % 26) + ret;
            columnNumber /= 26;
        } while (columnNumber);

        return ret;
    }
};