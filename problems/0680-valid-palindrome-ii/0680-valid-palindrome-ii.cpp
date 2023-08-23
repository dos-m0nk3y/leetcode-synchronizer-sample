class Solution
{
  public:
    bool helper(string s, int left, int right)
    {
        while (left < right)
            if (s[left++] != s[right--])
                return false;

        return true;
    }

    bool validPalindrome(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int left = 0, right = s.length() - 1;

        while (left < right)
            if (s[left++] != s[right--])
                return helper(s, left - 1, right) || helper(s, left, right + 1);

        return true;
    }
};