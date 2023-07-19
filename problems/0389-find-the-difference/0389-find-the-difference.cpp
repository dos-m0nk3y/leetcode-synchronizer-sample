class Solution
{
  public:
    char findTheDifference(string s, string t)
    {
        char ret = 0;
        for (int i = 0; i < s.length(); i++)
            ret ^= t[i] ^ s[i];

        return ret ^ t.back();
    }
};