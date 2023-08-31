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
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        s += s;

        vector<int> lps(goal.length(), 0);
        for (int i = 1; i < goal.length(); i++)
            do
            {
                lps[i] = lps[i] == 0 ? lps[i - 1] : lps[lps[i] - 1];
                if (goal[i] == goal[lps[i]])
                {
                    lps[i] += 1;
                    break;
                }
            } while (lps[i]);

        int left = 0, right = 0;
        while (left < s.length() && right < goal.length())
        {
            if (s[left] == goal[right])
            {
                left += 1;
                right += 1;
            }
            else if (right == 0)
                left += 1;
            else
                right = lps[right - 1];
        }

        return right == goal.length();
    }
};