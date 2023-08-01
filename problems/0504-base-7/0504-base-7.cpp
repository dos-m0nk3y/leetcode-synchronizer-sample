class Solution
{
  public:
    string convertToBase7(int num)
    {
        int conv = abs(num);

        string ret;
        do
        {
            ret += to_string(conv % 7);
        } while ((conv /= 7));

        if (num < 0)
            ret += '-';

        reverse(ret.begin(), ret.end());
        return ret;
    }
};