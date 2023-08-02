class Solution
{
  public:
    int fib(int n)
    {
        int fib[2] = {0, 1};
        for (int i = 2; i <= n; i++)
            fib[i & 1] += fib[(i + 1) & 1];

        return fib[n & 1];
    }
};