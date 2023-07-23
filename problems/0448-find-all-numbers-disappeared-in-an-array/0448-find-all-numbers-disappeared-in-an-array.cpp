class Solution
{
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            while (num != nums[num - 1])
                swap(num, nums[num - 1]);
        }

        vector<int> ret;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != i + 1)
                ret.push_back(i + 1);

        return ret;
    }
};