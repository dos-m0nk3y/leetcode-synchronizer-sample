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
    bool isOneBitCharacter(vector<int> &bits)
    {
        int idx = 0;
        while (idx < bits.size() - 1)
            idx += bits[idx] ? 2 : 1;

        return idx == bits.size() - 1;
    }
};