class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        int right = s.length() - 1;
        while (s[right] == ' ')
            right--;

        int left = right - 1;
        while (left >= 0 && s[left] != ' ')
            left--;

        return right - left;
    }
};