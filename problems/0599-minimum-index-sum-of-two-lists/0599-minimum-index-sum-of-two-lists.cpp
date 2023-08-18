class Solution
{
  public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        if (list1.size() > list2.size())
            list1.swap(list2);

        unordered_map<string, int> hashmap;
        for (int i = 0; i < list1.size(); i++)
            hashmap[list1[i]] = i;

        int min_idx = INT_MAX;
        vector<string> ret;

        for (int i = 0; i < list2.size(); i++)
            if (hashmap.find(list2[i]) != hashmap.end())
                if (min_idx >= i + hashmap[list2[i]])
                {
                    if (min_idx > i + hashmap[list2[i]])
                    {
                        min_idx = i + hashmap[list2[i]];
                        ret.clear();
                    }
                    ret.push_back(list2[i]);
                }

        return ret;
    }
};