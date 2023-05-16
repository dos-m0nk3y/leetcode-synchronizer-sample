class Solution
{
  private:
    int count[26];

  public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++)
        {
            count[s[i] - 'a'] += 1;
            count[t[i] - 'a'] -= 1;
        }

        for (int i = 0; i < 26; i++)
            if (count[i])
                return false;
        return true;
    }
};