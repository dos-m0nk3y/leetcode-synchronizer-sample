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
    bool areSentencesSimilar(vector<string> &sentence1, vector<string> &sentence2, vector<vector<string>> &similarPairs)
    {
        if (sentence1.size() != sentence2.size())
            return false;

        unordered_set<string> hashmap;
        for (auto pairs : similarPairs)
        {
            hashmap.insert(pairs[0] + " " + pairs[1]);
            hashmap.insert(pairs[1] + " " + pairs[0]);
        }

        for (int i = 0; i < sentence1.size(); i++)
        {
            if (sentence1[i] == sentence2[i])
                continue;
            if (hashmap.find(sentence1[i] + " " + sentence2[i]) == hashmap.end())
                return false;
        }

        return true;
    }
};