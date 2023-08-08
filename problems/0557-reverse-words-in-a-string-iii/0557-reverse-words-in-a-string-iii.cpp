class Solution
{
  public:
    string reverseWords(string s)
    {
        s += ' ';

        int left = 0;
        for (int right = 0; right < s.length(); right++)
            if (s[right] == ' ')
            {
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1;
            }

        s.pop_back();
        return s;
    }
};