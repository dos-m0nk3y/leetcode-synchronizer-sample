class Solution
{
  public:
    bool isPowerOfFour(int n)
    {
        // 00101010101010101010101010101010(2) == 715827882
        return n > 0 && (n & n - 1) == 0 && (n & 715827882) == 0;
    }
};