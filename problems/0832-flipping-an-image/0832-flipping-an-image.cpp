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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        int len = image.size();
        for (int i = 0; i < len; i++)
            for (int j = 0; j < round(len / 2.0); j++)
            {
                int temp = image[i][j];
                image[i][j] = 1 - image[i][len - 1 - j];
                image[i][len - 1 - j] = 1 - temp;
            }

        return image;
    }
};