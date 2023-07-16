class Solution
{
  private:
    char hashmap1[1001];
    char hashmap2[1001];

  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        for (int num : nums1)
            hashmap1[num] += 1;

        for (int num : nums2)
            if (hashmap1[num] > hashmap2[num])
                hashmap2[num] += 1;

        vector<int> ret;
        for (int i = 0; i <= 1000; i++)
            if (hashmap2[i])
                ret.insert(ret.end(), hashmap2[i], i);

        return ret;
    }
};