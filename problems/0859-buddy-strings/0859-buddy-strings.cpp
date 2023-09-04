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
    bool buddyStrings(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;

        unordered_set<char> hashset;
        if (s == goal)
        {
            for (char &ch : s)
            {
                if (hashset.find(ch) != hashset.end())
                    return true;
                hashset.insert(ch);
            }
            return false;
        }

        int idx = -1;
        for (int i = 0; i < s.length(); i++)
            if (s[i] != goal[i])
            {
                if (idx == -1)
                    idx = i;
                else
                {
                    swap(s[idx], s[i]);
                    break;
                }
            }

        return s == goal;
    }
};