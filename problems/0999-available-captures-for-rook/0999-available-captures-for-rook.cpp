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
    int numRookCaptures(vector<vector<char>> &board)
    {
        int col, row;
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                if (board[i][j] == 'R')
                {
                    row = i;
                    col = j;
                    break;
                }

        int count = 0;
        for (int i = col; i > 0; i--)
        {
            if (board[row][i - 1] != '.')
            {
                if (board[row][i - 1] == 'p')
                    count += 1;
                break;
            }
        }
        for (int i = col + 1; i < 8; i++)
        {
            if (board[row][i] != '.')
            {
                if (board[row][i] == 'p')
                    count += 1;
                break;
            }
        }
        for (int i = row; i > 0; i--)
        {
            if (board[i - 1][col] != '.')
            {
                if (board[i - 1][col] == 'p')
                    count += 1;
                break;
            }
        }
        for (int i = row + 1; i < 8; i++)
        {
            if (board[i][col] != '.')
            {
                if (board[i][col] == 'p')
                    count += 1;
                break;
            }
        }

        return count;
    }
};