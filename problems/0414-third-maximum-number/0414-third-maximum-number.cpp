class Solution
{
  public:
    int thirdMax(vector<int> &nums)
    {
        set<int> ret;
        for (int num : nums)
        {
            if (ret.size() < 3 || num > *ret.begin())
                ret.insert(num);
            if (ret.size() == 4)
                ret.erase(ret.begin());
        }

        return ret.size() < 3 ? *ret.rbegin() : *ret.begin();
    }
};