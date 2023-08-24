class Solution
{
  public:
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, vector<int>> hashmap;
        for (int i = 0; i < nums.size(); i++)
            hashmap[nums[i]].push_back(i);

        size_t degree = 0;
        for (auto &[num, indexes] : hashmap)
            degree = max(degree, indexes.size());

        int ret = INT_MAX;
        for (auto &[num, indexes] : hashmap)
            if (indexes.size() == degree)
                ret = min(ret, indexes.back() - indexes.front() + 1);

        return ret;
    }
};