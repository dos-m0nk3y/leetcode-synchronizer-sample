class Solution
{
  public:
    bool hasAlternatingBits(int n)
    {
        unsigned int ret = (unsigned int)n + (n >> 1);
        return (ret & ret + 1) == 0;
    }
};