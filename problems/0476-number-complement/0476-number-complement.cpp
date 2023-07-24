class Solution
{
  public:
    int findComplement(int num)
    {
        unsigned int mask = num;
        while (mask & (mask - 1))
            mask &= mask - 1;
        mask = (mask << 1) - 1;

        return mask & ~num;
    }
};