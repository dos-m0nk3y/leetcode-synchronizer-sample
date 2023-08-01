class Solution
{
  public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        map<int, int, greater<int>> hashmap;
        for (int i = 0; i < score.size(); i++)
            hashmap[score[i]] = i;

        vector<string> ret;
        ret.resize(score.size());

        int rank = 1;
        for (auto it = hashmap.begin(); it != hashmap.end(); it++, rank++)
        {
            if (rank == 1)
                ret[it->second] = "Gold Medal";
            else if (rank == 2)
                ret[it->second] = "Silver Medal";
            else if (rank == 3)
                ret[it->second] = "Bronze Medal";
            else
                ret[it->second] = to_string(rank);
        }

        return ret;
    }
};