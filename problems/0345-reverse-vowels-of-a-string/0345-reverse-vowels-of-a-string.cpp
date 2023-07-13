class Solution
{
  public:
    bool isVowel(char ch) { return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; }

    string reverseVowels(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            while (left < right && !isVowel(tolower(s[left])))
                left += 1;
            while (left < right && !isVowel(tolower(s[right])))
                right -= 1;

            swap(s[left++], s[right--]);
        }

        return s;
    }
};