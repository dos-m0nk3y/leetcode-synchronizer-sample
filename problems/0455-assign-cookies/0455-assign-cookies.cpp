class Solution
{
  public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int ret = 0;
        for (int idx1 = 0, idx2 = 0; idx1 < g.size() && idx2 < s.size(); idx2++)
            if (g[idx1] <= s[idx2])
            {
                idx1 += 1;
                ret += 1;
            }

        return ret;
    }
};