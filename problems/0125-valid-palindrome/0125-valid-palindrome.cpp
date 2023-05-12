class Solution
{
  public:
    bool isalnum(char ch) { return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ('0' <= ch && ch <= '9'); }
    char tolower(char ch)
    {
        if ('A' <= ch && ch <= 'Z')
            ch -= 'A' - 'a';
        return ch;
    }

    bool isPalindrome(string s)
    {
        int left = -1, right = s.length();

        while (true)
        {
            while (++left < s.length())
                if (isalnum(s[left]))
                    break;

            while (0 <= --right)
                if (isalnum(s[right]))
                    break;

            if (right <= left)
                return true;

            if (tolower(s[left]) != tolower(s[right]))
                return false;
        }
    }
};