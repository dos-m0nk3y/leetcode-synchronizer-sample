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
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ret(matrix[0].size(), vector<int>(matrix.size(), 0));
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[i].size(); j++)
                ret[j][i] = matrix[i][j];

        return ret;
    }
};