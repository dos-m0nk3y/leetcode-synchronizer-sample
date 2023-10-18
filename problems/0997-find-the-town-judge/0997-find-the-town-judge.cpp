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
    int findJudge(int n, vector<vector<int>> &trust)
    {
        int trusts[1001] = {}, trusted[1001] = {};
        for (vector<int> &arr : trust)
        {
            trusts[arr[0]] += 1;
            trusted[arr[1]] += 1;
        }

        for (int i = 1; i < 1000; i++)
            if (trusts[i] == 0 && trusted[i] == n - 1)
                return i;

        return -1;
    }
};