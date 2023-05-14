class Solution
{
  public:
    bool isHappy(int n)
    {
        while (!(n == 1 || n == 4))
        {
            int sum = 0;
            do
            {
                int digit = n % 10;
                sum += digit * digit;
            } while (n /= 10);
            n = sum;
        }

        return n == 1;
    }
};