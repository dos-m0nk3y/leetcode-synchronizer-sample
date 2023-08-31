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
    int countPrimeSetBits(int left, int right)
    {
        int count = 0;
        do
        {
            bitset<20> bits(left);
            switch (bits.count())
            {
            case 2:
            case 3:
            case 5:
            case 7:
            case 11:
            case 13:
            case 17:
            case 19:
                count += 1;
            }
        } while (++left <= right);

        return count;
    }
};