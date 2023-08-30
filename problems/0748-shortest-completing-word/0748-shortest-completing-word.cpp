static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    string shortestCompletingWord(string licensePlate, vector<string> &words)
    {
        int hashmap[26] = {};
        for (char &ch : licensePlate)
            if (isalpha(ch))
                hashmap[tolower(ch) - 'a'] += 1;

        string ret(16, ' ');
        for (string &word : words)
        {
            int letters[26] = {};
            for (char &ch : word)
                letters[ch - 'a'] += 1;

            bool check = true;
            for (int i = 0; i < 26; i++)
                if (hashmap[i] > letters[i])
                {
                    check = false;
                    break;
                }

            if (check && word.length() < ret.length())
                ret = word;
        }

        return ret;
    }
};