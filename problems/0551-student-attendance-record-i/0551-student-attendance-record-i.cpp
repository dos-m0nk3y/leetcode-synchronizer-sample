class Solution
{
  public:
    bool checkRecord(string s)
    {
        bool absent = false;
        int late = 0;

        for (char ch : s)
        {
            if (ch == 'A')
            {
                if (absent)
                    return false;
                absent = true;
            }

            if (ch == 'L')
            {
                late += 1;
                if (late == 3)
                    return false;
            }
            else
                late = 0;
        }

        return true;
    }
};