class Solution
{
  public:
    int shortestDistance(vector<string> &wordsDict, string word1, string word2)
    {
        int ret = INT_MAX;
        int idx1 = -1, idx2 = -1;

        for (int i = 0; i < wordsDict.size(); i++)
        {
            if (wordsDict[i] == word1)
                idx1 = i;
            else if (wordsDict[i] == word2)
                idx2 = i;

            if (idx1 != -1 && idx2 != -1)
                ret = min(ret, abs(idx1 - idx2));
        }

        return ret;
    }
};