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
    bool backspaceCompare(string s, string t)
    {
        for (int i = s.length() - 1, j = t.length() - 1; i >= 0 || j >= 0; i--, j--)
        {
            int backspace;
            for (backspace = 0; i >= 0 && (s[i] == '#' || backspace); i--)
                backspace += s[i] == '#' ? 1 : -1;
            for (backspace = 0; j >= 0 && (t[j] == '#' || backspace); j--)
                backspace += t[j] == '#' ? 1 : -1;

            if (i < 0 || j < 0)
                return i == j;
            if (s[i] != t[j])
                return false;
        }

        return true;
    }
};