class Solution
{
  public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        if (mat.size() * mat[0].size() != r * c)
            return mat;

        int row = 0, col = 0;
        vector<vector<int>> ret(r, vector<int>(c, 0));

        for (vector<int> nums : mat)
            for (int num : nums)
            {
                ret[row][col++] = num;
                if (col == c)
                {
                    col = 0;
                    row += 1;
                }
            }

        return ret;
    }
};