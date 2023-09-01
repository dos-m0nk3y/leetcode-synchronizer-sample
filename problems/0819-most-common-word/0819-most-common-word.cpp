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
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> hashmap;

        string word;
        paragraph += ' ';

        for (int i = 0; i < paragraph.length(); i++)
        {
            if (isalpha(paragraph[i]))
                word += tolower(paragraph[i]);
            else if (word.length())
            {
                hashmap[word] += 1;
                word = "";
            }
        }

        string ret = "";
        for (auto &[key, val] : hashmap)
            if (ban.find(key) == ban.end() && hashmap[ret] < val)
                ret = key;

        return ret;
    }
};