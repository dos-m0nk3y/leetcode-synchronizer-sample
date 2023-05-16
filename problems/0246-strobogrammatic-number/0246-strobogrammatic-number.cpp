class Solution
{
  public:
    bool isStrobogrammatic(string num)
    {
        unordered_map<int, int> hashmap({{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}});
        for (int i = 0; i < num.size(); i++)
        {
            if (hashmap.find(num[i]) == hashmap.end())
                return false;
            if (hashmap[num[i]] != num[num.size() - 1 - i])
                return false;
        }

        return true;
    }
};