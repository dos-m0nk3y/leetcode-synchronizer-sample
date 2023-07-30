class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        nums.push_back(0);

        int ret = 0, count = 0;
        for (int num : nums)
        {
            if (num)
                count += 1;
            else
            {
                ret = max(ret, count);
                count = 0;
            }
        }

        return ret;
    }
};