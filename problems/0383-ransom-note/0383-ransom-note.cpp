class Solution
{
  public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int letters[26];
        for (int i = 0; i < 26; i++)
            letters[i] = 0;

        for (char ch : magazine)
            letters[ch - 'a'] += 1;

        for (char ch : ransomNote)
            if (letters[ch - 'a']-- == 0)
                return false;

        return true;
    }
};