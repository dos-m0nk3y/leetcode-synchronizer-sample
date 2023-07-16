class Solution
{
  public:
    bool isPerfectSquare(int num)
    {
        double est = 46341;
        while (est * est > num)
            est = (int)(est + num / est) / 2;

        return est * est == num;
    }
};