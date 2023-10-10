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
    vector<int> diStringMatch(string s)
    {
        int left = 0, right = s.length();
        vector<int> ret;

        s += s.back();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                ret.push_back(left);
                left += 1;
            }
            else if (s[i] == 'D')
            {
                ret.push_back(right);
                right -= 1;
            }
        }

        return ret;
    }
};