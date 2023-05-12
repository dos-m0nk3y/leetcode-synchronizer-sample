class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ret(1, 1), row;
        for (int i = 1; i <= rowIndex; i++)
        {
            row = ret;
            ret.resize(i + 1, 1);

            for (int j = 1; j < i; j++)
                ret[j] = row[j - 1] + row[j];
        }

        return ret;
    }
};