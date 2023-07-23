class Solution
{
  public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> hashmap;
        for (char ch : s)
            hashmap[ch] += 1;

        int even = 0, odd = 0;
        for (auto entry : hashmap)
        {
            even += entry.second >> 1 << 1;
            odd |= entry.second & 1;
        }

        return even + odd;
    }
};