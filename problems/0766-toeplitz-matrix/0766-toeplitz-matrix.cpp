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
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 1; i < matrix.size(); i++)
            for (int j = 1; j < matrix[i].size(); j++)
                if (matrix[i][j] != matrix[i - 1][j - 1])
                    return false;

        return true;
    }
};