class Solution
{
  public:
    int mySqrt(int x)
    {
        double num1 = 46340;
        double num2 = num1;

        while (true)
        {
            num2 = (num1 + x / num1) / 2;
            if ((int)num1 == (int)num2)
                break;
            num1 = num2;
        }

        return (int)num1;
    }
};