static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    bool lemonadeChange(vector<int> &bills)
    {
        int five = 0, ten = 0;
        for (int &bill : bills)
        {
            if (bill == 5)
                five += 1;
            else if (bill == 10)
            {
                ten += 1;
                if (five >= 1)
                    five -= 1;
                else
                    return false;
            }
            else if (bill == 20)
            {
                if (ten >= 1 && five >= 1)
                {
                    ten -= 1;
                    five -= 1;
                }
                else if (five >= 3)
                    five -= 3;
                else
                    return false;
            }
        }

        return true;
    }
};