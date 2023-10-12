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
    bool isAlienSorted(vector<string> &words, string order)
    {
        unordered_map<char, char> hashmap;
        for (int i = 0; i < 26; i++)
            hashmap[order[i]] = i + 1;

        for (int i = 0; i < words.size() - 1; i++)
            for (int j = 0; j < words[i].length(); j++)
            {
                if (!(j < words[i + 1].length()))
                    return false;
                else if (hashmap[words[i][j]] < hashmap[words[i + 1][j]])
                    break;
                else if (hashmap[words[i][j]] > hashmap[words[i + 1][j]])
                    return false;
            }

        return true;
    }
};