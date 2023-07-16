class Solution
{
  private:
    char hashmap[1001];

  public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        for (int num : nums1)
            hashmap[num] = 1;

        for (int num : nums2)
            if (hashmap[num] == 1)
                hashmap[num] = 2;

        vector<int> ret;
        for (int i = 0; i <= 1000; i++)
            if (hashmap[i] == 2)
                ret.push_back(i);

        return ret;
    }
};