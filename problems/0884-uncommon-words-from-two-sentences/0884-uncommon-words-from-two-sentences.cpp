static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  private:
    unordered_map<string, int> hashmap;

  public:
    void countWords(string str)
    {
        string word;

        str += ' ';
        for (char &ch : str)
        {
            if (ch != ' ')
                word += ch;
            else
            {
                hashmap[word] += 1;
                word = "";
            }
        }
    }

    vector<string> uncommonFromSentences(string s1, string s2)
    {
        countWords(s1);
        countWords(s2);

        vector<string> ret;
        for (auto &[key, val] : hashmap)
            if (val == 1)
                ret.push_back(key);

        return ret;
    }
};