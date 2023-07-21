class Solution
{
  public:
    bool validWordAbbreviation(string word, string abbr)
    {
        int left = 0, right = 0;
        while (left < abbr.length() && right < word.length())
        {
            if (isalpha(abbr[left]))
            {
                if (abbr[left++] != word[right++])
                    return false;
                continue;
            }
            if (abbr[left] == '0')
                return 0;

            int start = left;
            while (left < abbr.length() && !isalpha(abbr[left]))
                left += 1;
            right += stoi(abbr.substr(start, left - start));
        }

        return (left == abbr.length() && right == word.length());
    }
};