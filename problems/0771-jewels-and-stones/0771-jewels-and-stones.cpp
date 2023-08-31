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
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> hashmap;
        for (char &jewel : jewels)
            hashmap.insert(jewel);

        int ret = 0;
        for (char &stone : stones)
            if (hashmap.find(stone) != hashmap.end())
                ret += 1;

        return ret;
    }
};