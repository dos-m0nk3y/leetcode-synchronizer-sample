class Solution
{
  public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> word;

        int start = 0, end;
        do
        {
            end = s.find(' ', start);
            word.push_back(s.substr(start, end - start));
            start = end + 1;
        } while (end != -1);

        if (pattern.length() != word.size())
            return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.length(); i++)
        {
            if (p2w.find(pattern[i]) == p2w.end() && w2p.find(word[i]) == w2p.end())
            {
                p2w[pattern[i]] = word[i];
                w2p[word[i]] = pattern[i];
            }
            else if (p2w[pattern[i]] != word[i] || w2p[word[i]] != pattern[i])
                return false;
        }

        return true;
    }
};