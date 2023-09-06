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
    int surfaceArea(vector<vector<int>> &grid)
    {
        int ret = 0;
        int len = grid.size();

        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
            {
                if (grid[i][j])
                    ret += 2 + 4 * grid[i][j];
                if (i > 0)
                    ret -= min(grid[i][j], grid[i - 1][j]);
                if (j > 0)
                    ret -= min(grid[i][j], grid[i][j - 1]);
                if (i < len - 1)
                    ret -= min(grid[i][j], grid[i + 1][j]);
                if (j < len - 1)
                    ret -= min(grid[i][j], grid[i][j + 1]);
            }

        return ret;
    }
};