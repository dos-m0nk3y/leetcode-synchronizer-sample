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
    vector<int> anagramMappings(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, queue<int>> hashmap;
        for (int i = 0; i < nums2.size(); i++)
            hashmap[nums2[i]].push(i);

        vector<int> ret;
        for (int &num : nums1)
        {
            ret.push_back(hashmap[num].front());
            hashmap[num].pop();
        }

        return ret;
    }
};