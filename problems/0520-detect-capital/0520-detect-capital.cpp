class Solution
{
  public:
    bool detectCapitalUse(string word)
    {
        for (int i = 1; i < word.length() - 1; i++)
            if (word[i] >= 97 != word[i + 1] >= 97)
                return false;

        return word.length() == 1 || word[0] <= 90 || (word[0] >= 97 == word[1] >= 97);
    }
};