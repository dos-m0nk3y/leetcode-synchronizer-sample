class Solution
{
  public:
    int hammingDistance(int x, int y)
    {
        bitset<32> bit(x ^ y);
        return bit.count();
    }
};