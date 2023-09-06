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
    int projectionArea(vector<vector<int>> &grid)
    {
        int ret = 0;
        int len = grid.size();

        for (int i = 0; i < len; i++)
        {
            int xy = 0, yz = 0, zx = 0;
            for (int j = 0; j < len; j++)
            {
                if (grid[i][j])
                    xy += 1;
                yz = max(yz, grid[j][i]);
                zx = max(zx, grid[i][j]);
            }
            ret += xy + yz + zx;
        }

        return ret;
    }
};