static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  private:
    int old_color;
    int new_color;

  public:
    void helper(vector<vector<int>> &image, int col, int row)
    {
        if (!(0 <= col && col < image.size() && 0 <= row && row < image[0].size()))
            return;
        if (image[col][row] != old_color)
            return;

        image[col][row] = new_color;
        helper(image, col - 1, row);
        helper(image, col, row - 1);
        helper(image, col, row + 1);
        helper(image, col + 1, row);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        old_color = image[sr][sc];
        new_color = color;

        if (old_color != new_color)
            helper(image, sr, sc);
        return image;
    }
};