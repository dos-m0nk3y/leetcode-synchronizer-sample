typedef map<char, int> Map;

class Solution
{
  public:
    int lengthOfLongestSubstring(string s)
    {
        Map ch_map;
        int left = 0, right = 0;
        int ret = 0;

        for (; right < s.length(); right++)
        {
            if (ch_map.find(s[right]) != ch_map.end())
                if (left <= ch_map[s[right]])
                {
                    ret = max(ret, right - left);
                    left = ch_map[s[right]] + 1;
                }
            ch_map[s[right]] = right;
        }

        return max(ret, (int)s.length() - left);
    }
};