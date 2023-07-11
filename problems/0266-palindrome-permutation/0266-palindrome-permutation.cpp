class Solution
{
  private:
    int count[26];

  public:
    bool canPermutePalindrome(string s)
    {
        for (int i = 0; i < s.length(); i++)
            count[s[i] - 'a']++;

        int odd = 0;
        for (int i = 0; i < 26; i++)
            odd += count[i] % 2;

        return odd <= 1;
    }
};