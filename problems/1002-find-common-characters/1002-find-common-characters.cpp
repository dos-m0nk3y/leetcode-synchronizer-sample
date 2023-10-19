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
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> min_count(26, INT_MAX);
        for (int i = 0; i < words.size(); i++)
        {
            int cur_count[26] = {};
            for (char ch : words[i])
                cur_count[ch - 'a'] += 1;

            for (int j = 0; j < 26; j++)
                min_count[j] = min(min_count[j], cur_count[j]);
        }

        vector<string> ret;
        for (int i = 0; i < 26; i++)
            for (int j = 0; j < min_count[i]; j++)
                ret.push_back(string(1, 'a' + i));

        return ret;
    }
};