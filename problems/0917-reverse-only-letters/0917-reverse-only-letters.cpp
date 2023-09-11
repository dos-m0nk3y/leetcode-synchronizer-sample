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
    string reverseOnlyLetters(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            if (!isalpha(s[left]))
                left += 1;
            else if (!isalpha(s[right]))
                right -= 1;
            else
                swap(s[left++], s[right--]);
        }

        return s;
    }
};