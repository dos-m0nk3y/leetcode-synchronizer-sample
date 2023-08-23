class Solution
{
  public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> ret(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                int sum = 0, count = 0;
                for (int di = -1; di <= 1; di++)
                    for (int dj = -1; dj <= 1; dj++)
                        if ((unsigned int)(i + di) < m && (unsigned int)(j + dj) < n)
                        {
                            sum += img[i + di][j + dj];
                            count += 1;
                        }
                ret[i][j] = sum / count;
            }

        return ret;
    }
};