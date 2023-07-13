class Solution
{
  public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;

        // pow(3, floor(log(INT_MAX) / log(3))) == 1162261467
        return (1162261467 % n == 0);
    }
};