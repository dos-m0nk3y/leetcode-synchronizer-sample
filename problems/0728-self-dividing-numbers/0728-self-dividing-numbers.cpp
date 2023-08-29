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
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ret;
        do
        {
            int num = left;
            bool check = true;

            do
            {
                int digit = num % 10;
                if (digit == 0 || left % digit)
                {
                    check = false;
                    break;
                }
            } while ((num /= 10));

            if (check)
                ret.push_back(left);
        } while (++left <= right);

        return ret;
    }
};