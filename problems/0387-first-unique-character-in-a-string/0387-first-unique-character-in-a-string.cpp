class Solution
{
  public:
    int firstUniqChar(string s)
    {
        int count[26];

        memset(count, 0, sizeof(int) * 26);
        for (char ch : s)
            count[ch - 'a'] += 1;

        for (int i = 0; i < s.length(); i++)
            if (count[s[i] - 'a'] == 1)
                return i;

        return -1;
    }
};